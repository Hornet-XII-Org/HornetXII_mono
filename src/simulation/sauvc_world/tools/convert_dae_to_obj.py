#!/usr/bin/env python3
"""Convert the 3d_pool_props COLLADA (.dae) meshes to Wavefront OBJ + MTL.

Why: Gazebo's COLLADA loader rendered these .dae files with missing triangles
(vertical streaks). OBJ loads reliably and is what the pool meshes already use.

Handles only what these files use: <triangles> with VERTEX + NORMAL inputs,
flat <phong> diffuse colours, no textures, no node transforms.
Geometry is written unchanged (still cm, still Y-up); the model.sdf applies the
0.01 scale and the 90 degree roll.

Usage: convert_dae_to_obj.py input.dae output_dir
"""
import os
import sys
import xml.etree.ElementTree as ET

import numpy as np


def convert(dae_path, out_dir):
    root = ET.parse(dae_path).getroot()
    ns = {'c': root.tag.split('}')[0][1:]}
    base = os.path.splitext(os.path.basename(dae_path))[0]

    # effect id -> diffuse rgb
    effect_diffuse = {}
    for eff in root.findall('.//c:library_effects/c:effect', ns):
        col = eff.find('.//c:diffuse/c:color', ns)
        if col is not None:
            effect_diffuse[eff.get('id')] = [float(v) for v in col.text.split()[:3]]
    # material id -> diffuse rgb
    material_rgb = {}
    for mat in root.findall('.//c:library_materials/c:material', ns):
        ref = mat.find('c:instance_effect', ns).get('url')[1:]
        material_rgb[mat.get('id')] = effect_diffuse.get(ref, [0.5, 0.5, 0.5])

    # geometry id -> material id (via the visual scene bindings)
    geom_material = {}
    for ig in root.findall('.//c:visual_scene//c:instance_geometry', ns):
        im = ig.find('.//c:instance_material', ns)
        if im is not None:
            geom_material[ig.get('url')[1:]] = im.get('target')[1:]

    obj, used = [], {}
    v_off = n_off = 0
    for geom in root.findall('.//c:library_geometries/c:geometry', ns):
        mesh = geom.find('c:mesh', ns)
        sources = {
            s.get('id'): np.array(s.find('c:float_array', ns).text.split(), float)
            for s in mesh.findall('c:source', ns)
        }
        vert = mesh.find('c:vertices', ns)
        pos_src = [i.get('source')[1:] for i in vert.findall('c:input', ns)
                   if i.get('semantic') == 'POSITION'][0]
        P = sources[pos_src].reshape(-1, 3)
        mname = geom_material.get(geom.get('id'), None)
        rgb = material_rgb.get(mname, [0.5, 0.5, 0.5])
        key = mname or 'default'
        used[key] = rgb

        obj.append(f'o {geom.get("id")}')
        obj.append(f'usemtl {key}')
        N_all = []
        faces = []
        for tri in mesh.findall('c:triangles', ns):
            inputs = tri.findall('c:input', ns)
            stride = max(int(i.get('offset')) for i in inputs) + 1
            sem = {i.get('semantic'): (int(i.get('offset')), i.get('source')[1:])
                   for i in inputs}
            idx = np.array(tri.find('c:p', ns).text.split(), int).reshape(-1, stride)
            vi = idx[:, sem['VERTEX'][0]]
            ni = idx[:, sem['NORMAL'][0]] if 'NORMAL' in sem else None
            if ni is not None:
                N = sources[sem['NORMAL'][1]].reshape(-1, 3)
                N_all = N
            faces.append((vi, ni))
        for p in P:
            obj.append('v %.6f %.6f %.6f' % tuple(p))
        for n in N_all:
            obj.append('vn %.6f %.6f %.6f' % tuple(n))
        for vi, ni in faces:
            for t in range(0, len(vi), 3):
                if ni is not None:
                    a = [f'{vi[t + k] + 1 + v_off}//{ni[t + k] + 1 + n_off}' for k in range(3)]
                else:
                    a = [f'{vi[t + k] + 1 + v_off}' for k in range(3)]
                obj.append('f ' + ' '.join(a))
        v_off += len(P)
        n_off += len(N_all)

    os.makedirs(out_dir, exist_ok=True)
    with open(os.path.join(out_dir, base + '.obj'), 'w') as f:
        f.write(f'mtllib {base}.mtl\n' + '\n'.join(obj) + '\n')
    with open(os.path.join(out_dir, base + '.mtl'), 'w') as f:
        for name, rgb in used.items():
            r, g, b = rgb
            f.write(f'newmtl {name}\nKa {r:.4f} {g:.4f} {b:.4f}\n'
                    f'Kd {r:.4f} {g:.4f} {b:.4f}\nKs 0.1 0.1 0.1\nNs 10\nd 1.0\n\n')
    print(f'{base}: {len(used)} materials, {v_off} vertices')


if __name__ == '__main__':
    convert(sys.argv[1], sys.argv[2])
