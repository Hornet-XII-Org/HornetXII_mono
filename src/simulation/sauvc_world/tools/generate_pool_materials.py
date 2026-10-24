#!/usr/bin/env python3
"""Generate original, deterministic pool materials and metre-scaled UV meshes.

Development only: requires numpy and Pillow. Generated assets are committed;
Gazebo and the installed ROS package do not need these Python dependencies.
See models/pool/REFERENCES.md for photographic references and assumptions.
"""
from pathlib import Path
import math
import xml.etree.ElementTree as ET

import numpy as np
from PIL import Image

POOL = Path(__file__).resolve().parents[1] / 'models' / 'pool'
RESOLUTION = 1024
POOL_LENGTH = 50.0
POOL_WIDTH = 25.0
SHALLOW_DEPTH = 1.28
DEEP_DEPTH = 2.0
SHALLOW_FLAT = 1.8
# Interpretation of the archived 2025 diagram: 17.5 m is the slope length
# in plan, following the 1.8 m shallow flat. Not a 2027 surveyed dimension.
SLOPE_RUN = 17.5
SLOPE_START = -POOL_LENGTH / 2 + SHALLOW_FLAT
SLOPE_END = SLOPE_START + SLOPE_RUN
LANE_CENTERS = [(i - 3.5) * 2.5 for i in range(8)]


def depth(x):
    fraction = min(1.0, max(0.0, (x - SLOPE_START) / SLOPE_RUN))
    return SHALLOW_DEPTH + fraction * (DEEP_DEPTH - SHALLOW_DEPTH)


def pool_geometry():
    """Author collisions and visual poses from waterline-relative dimensions."""
    root = ET.Element('sdf', version='1.9')
    model = ET.SubElement(root, 'model', name='sauvc_pool')
    ET.SubElement(model, 'static').text = 'true'
    link = ET.SubElement(model, 'link', name='pool_structure')

    def box(name, size, pose):
        for tag, label in [('visual', name), ('collision', name + '_collision')]:
            element = ET.SubElement(link, tag, name=label)
            ET.SubElement(element, 'pose').text = ' '.join(f'{v:.10f}' for v in pose)
            shape = ET.SubElement(ET.SubElement(element, 'geometry'), 'box')
            ET.SubElement(shape, 'size').text = ' '.join(f'{v:.10f}' for v in size)
            if tag == 'visual':
                ET.SubElement(element, 'material')

    # Inner wall faces, rather than wall centres, bound exactly 50 x 25 m.
    for name, x in [('left_wall', -25.075), ('right_wall', 25.075)]:
        box(name, [.15, 25, 2.3], [x, 0, -1.05, 0, 0, 0])
    for name, y in [('top_wall', 12.575), ('bottom_wall', -12.575)]:
        box(name, [50.3, .15, 2.3], [0, y, -1.05, 0, 0, 0])
    for name, start, end in [
        ('floor_shallow', -25, SLOPE_START),
        ('floor_slope', SLOPE_START, SLOPE_END),
        ('floor_deep', SLOPE_END, 25),
    ]:
        angle = math.atan2(depth(end) - depth(start), end - start)
        length = math.hypot(end - start, depth(end) - depth(start))
        # Offset the box centre along the normal so its TOP is the pool floor.
        box(name, [length, 25, .2], [
            (start + end) / 2 - .1 * math.sin(angle), 0,
            -(depth(start) + depth(end)) / 2 - .1 * math.cos(angle),
            0, angle, 0])
    return ET.ElementTree(root)


def texture(name, width, height, tile_width, tile_height):
    """A repeatable patch with 2 mm grout, ceramic variation and shallow relief."""
    n = RESOLUTION
    y, x = np.mgrid[:n, :n]
    u, v = (x + 0.5) * width / n, (y + 0.5) * height / n
    dx = np.minimum(u % tile_width, tile_width - u % tile_width)
    dy = np.minimum(v % tile_height, tile_height - v % tile_height)
    distance = np.minimum(dx, dy)
    grout = distance < 0.001
    bevel = np.clip((distance - 0.001) / 0.0015, 0, 1)
    rng = np.random.default_rng(2081)
    variations = rng.uniform(-3, 3, (round(height / tile_height), round(width / tile_width)))
    variation = variations[
        np.minimum((v / tile_height).astype(int), variations.shape[0] - 1),
        np.minimum((u / tile_width).astype(int), variations.shape[1] - 1),
    ]
    # Appearance compensation for this world's multiple bright lights and its
    # lack of underwater color attenuation; neutral ceramic clips to white.
    base = np.array([86, 151, 167], dtype=float)
    navy = np.array([25, 52, 85], dtype=float)
    if name == 'marking':
        stripe = np.ones_like(v, dtype=bool)
    elif name == 'wall':
        stripe = (v >= 2.25) & (v < 2.45)
    else:
        stripe = np.zeros_like(v, dtype=bool)
    color = np.broadcast_to(base, (n, n, 3)).copy()
    color[stripe] = navy
    color += variation[..., None]
    color *= (0.94 + 0.06 * bevel)[..., None]
    color[grout] = [111, 133, 140]
    Image.fromarray(np.uint8(np.clip(color, 0, 255))).save(
        POOL / 'materials' / 'textures' / f'{name}_albedo.png')
    roughness = np.where(grout, 215, np.where(stripe, 130, 155)).astype(np.uint8)
    Image.fromarray(roughness).save(
        POOL / 'materials' / 'textures' / f'{name}_roughness.png')
    relief = bevel * 0.0004
    # Wrapped differences keep the normal maps seamless at patch boundaries.
    du = (np.roll(relief, -1, 1) - np.roll(relief, 1, 1)) / (2 * width / n)
    dv = (np.roll(relief, -1, 0) - np.roll(relief, 1, 0)) / (2 * height / n)
    normal = np.stack([-du, -dv, np.ones_like(du)], axis=-1)
    normal /= np.linalg.norm(normal, axis=-1, keepdims=True)
    Image.fromarray(np.uint8(np.clip((normal + 1) * 127.5, 0, 255))).save(
        POOL / 'materials' / 'textures' / f'{name}_normal.png')


def box_mesh(name, size, center, pitch):
    """24 vertices / 12 triangles; UVs encode metres, not one tile per box."""
    half = np.array(size) / 2
    floor = name.startswith('floor')
    faces = [
        ((1, 0, 0), (0, 1, 0), (0, 0, 1)),
        ((-1, 0, 0), (0, -1, 0), (0, 0, 1)),
        ((0, 1, 0), (-1, 0, 0), (0, 0, 1)),
        ((0, -1, 0), (1, 0, 0), (0, 0, 1)),
        ((0, 0, 1), (1, 0, 0), (0, 1, 0)),
        ((0, 0, -1), (-1, 0, 0), (0, 1, 0)),
    ]
    out = ['# Original generated pool box; UV coordinates are metre-scaled.']
    for face_index, (normal, u_axis, v_axis) in enumerate(faces):
        normal, u_axis, v_axis = map(np.array, (normal, u_axis, v_axis))
        points = [normal * half + a * u_axis * half + b * v_axis * half
                  for a, b in [(-1, -1), (1, -1), (1, 1), (-1, 1)]]
        for p in points:
            out.append('v ' + ' '.join(f'{c:.8f}' for c in p))
        for p in points:
            if floor and normal[2] != 0:
                # Project to world X so phase aligns at both slope junctions.
                world_x = p[0] * math.cos(pitch) + p[2] * math.sin(pitch) + center[0]
                u, v = world_x / 2, (p[1] + center[1]) / 2
            elif not floor and normal[2] == 0:
                u, v = float(p @ u_axis), (p[2] + center[2] + 2.5) / 3
            else:
                u, v = float(p @ u_axis) / 2, float(p @ v_axis) / 2
            # Images are stored top-to-bottom; OBJ V runs bottom-to-top.
            out.append(f'vt {u:.8f} {1 - v:.8f}')
        out.append('vn ' + ' '.join(str(c) for c in normal))
        start = face_index * 4 + 1
        for a, b, c in [(0, 1, 2), (0, 2, 3)]:
            out.append('f ' + ' '.join(
                f'{start + i}/{start + i}/{face_index + 1}' for i in (a, b, c)))
    (POOL / 'meshes' / f'{name}.obj').write_text('\n'.join(out) + '\n')


def lane_mesh():
    """Exactly eight visual-only stripes, with end Ts, following the floor."""
    out = ['# Eight SP-inspired lanes; standard-derived dimensions are provisional.']
    count = 0

    def rectangle(x0, x1, y0, y1):
        nonlocal count
        cuts = sorted({x0, x1} | {x for x in [SLOPE_START, SLOPE_END] if x0 < x < x1})
        for a, b in zip(cuts, cuts[1:]):
            points = [(a, y0), (b, y0), (b, y1), (a, y1)]
            for x, y in points:
                out.append(f'v {x:.8f} {y:.8f} {-depth(x) + .003:.8f}')
            for x, y in points:
                out.append(f'vt {x / 2:.8f} {1 - y / 2:.8f}')
            slope = (depth(b) - depth(a)) / (b - a)
            scale = math.sqrt(1 + slope * slope)
            out.append(f'vn {slope / scale:.8f} 0 {1 / scale:.8f}')
            normal_index = count // 4 + 1
            for triangle in [(1, 2, 3), (1, 3, 4)]:
                out.append('f ' + ' '.join(
                    f'{count + i}/{count + i}/{normal_index}' for i in triangle))
            count += 4

    for y in LANE_CENTERS:
        rectangle(-23, 23, y - .1, y + .1)
        rectangle(-23.1, -22.9, y - .5, y + .5)
        rectangle(22.9, 23.1, y - .5, y + .5)
    (POOL / 'meshes' / 'lane_markings.obj').write_text('\n'.join(out) + '\n')


def material_for(visual, kind):
    material = visual.find('material')
    material.clear()
    ET.SubElement(material, 'ambient').text = '0.35 0.45 0.5 1'
    ET.SubElement(material, 'diffuse').text = '1 1 1 1'
    metal = ET.SubElement(ET.SubElement(material, 'pbr'), 'metal')
    for tag, suffix in [('albedo_map', 'albedo'), ('normal_map', 'normal'),
                        ('roughness_map', 'roughness')]:
        # Thin overlay strips do not need tangent-space relief. Ogre falls
        # back to white if a normal map is assigned without mesh tangents.
        if kind == 'marking' and tag == 'normal_map':
            continue
        ET.SubElement(metal, tag).text = (
            f'model://pool/materials/textures/{kind}_{suffix}.png')
    ET.SubElement(metal, 'metalness').text = '0'
    ET.SubElement(metal, 'roughness').text = '0.6'


def main():
    (POOL / 'meshes').mkdir(exist_ok=True)
    (POOL / 'materials' / 'textures').mkdir(parents=True, exist_ok=True)
    texture('floor', 2, 2, 0.2, 0.2)
    texture('wall', 1, 3, 0.1, 0.2)
    texture('marking', 2, 2, 0.2, 0.2)
    sdf = pool_geometry()
    for visual in sdf.findall('.//visual'):
        name = visual.get('name')
        collision = sdf.find(f'.//collision[@name="{name}_collision"]')
        size = [float(x) for x in collision.findtext('geometry/box/size').split()]
        pose = [float(x) for x in visual.findtext('pose').split()]
        box_mesh(name, size, pose[:3], pose[4])
        geometry = visual.find('geometry')
        geometry.clear()
        ET.SubElement(ET.SubElement(geometry, 'mesh'), 'uri').text = (
            f'model://pool/meshes/{name}.obj')
        kind = 'floor' if name.startswith('floor') else 'wall'
        material_for(visual, kind)
    lane_mesh()
    lanes = ET.SubElement(sdf.find('.//link'), 'visual', name='lane_markings')
    geometry = ET.SubElement(lanes, 'geometry')
    ET.SubElement(ET.SubElement(geometry, 'mesh'), 'uri').text = (
        'model://pool/meshes/lane_markings.obj')
    ET.SubElement(lanes, 'material')
    material_for(lanes, 'marking')
    ET.indent(sdf, space='  ')
    sdf.write(POOL / 'poolWalls.sdf', encoding='unicode', xml_declaration=True)


if __name__ == '__main__':
    main()
