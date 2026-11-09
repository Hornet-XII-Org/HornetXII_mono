# Pool material references

Target: the **Singapore Polytechnic** SAUVC pool, selected by the user.
Research and implementation: 24 October 2026.

## Primary references

- [Official SAUVC rulebook and arena photographs](https://sauvc.org/rulebook/).
  This is a changing page; at research time it describes the 2026 event and
  includes explicitly dated photographs from previous Singapore events.
- [Official underwater arena photograph, 2017](https://sauvc.org/rulebook/img/arena-2017.jpg):
  pale tiled floor, visible dark grout, broad dark-blue swimming-lane lines.
- [Official underwater drum photograph, 2017](https://sauvc.org/rulebook/img/drums-2017.jpg):
  pale rectangular wall tiles, dark grout and dark-blue waterline band.
- [Official starting-zone photograph, 2022](https://sauvc.org/rulebook/img/starting-zone-2022.jpg):
  Singapore outdoor pool and dark lane markings.
- [Official 2026 Sanya venue photograph](https://sauvc.org/rulebook/img/sanyavenue2.jpg):
  blue mosaic finish; inspected to distinguish it from the requested Singapore pool.

The reference photos were inspected for appearance only. They are **not**
redistributed as textures or bundled in this package.

## Pool geometry and course

The pool interior is **50 × 25 m**, with waterline at z=0. X runs along the
50 m length; the shallow wall is x=-25 and deep wall is x=25. The floor top
is 1.28 m below water at the shallow end and 2.00 m at the deep end.

Source: [archived official 2025 arena diagram](https://raw.githubusercontent.com/sauvc/rulebook/016d4503b9d321f6db17b002a158877900d91079/img/arena-2025.jpg)
and [archived 2025 rulebook](https://raw.githubusercontent.com/sauvc/rulebook/016d4503b9d321f6db17b002a158877900d91079/rulebook.md).
The diagram is not to scale. Its 1.8 m shallow flat and 17.5 m slope labels are
interpreted as a shallow flat ending at x=-23.2, then a 17.5 m horizontal slope
ending at x=-5.7 (19.3 m from the shallow wall), followed by a deep flat.
The interpretation of the slope dimension remains subject to venue confirmation.
Visual meshes and collision boxes describe the same floor surface.

The official [2022 aerial photograph](https://raw.githubusercontent.com/sauvc/rulebook/016d4503b9d321f6db17b002a158877900d91079/img/arena-top-2022.jpg)
shows eight longitudinal lane markings and end Ts. This model uses exactly
eight, with centres at y=-8.75, -6.25, -3.75, -1.25, 1.25, 3.75, 6.25, 8.75 m.
The 2.5 m spacing, 0.2 m width, 46 m stripe length, 2 m end clearance and 1 m
T crossbars use the [2021–2025 FINA facilities standard, FR 2.1.15](https://resources.fina.org/fina/document/2022/02/08/77c3058d-b549-4543-8524-ad51a857864e/210805-Facilities-Rules_clean.pdf)
as modelling assumptions, not a survey of SP's construction.
Lane markings are visual-only meshes 3 mm above the floor, split at slope
junctions. Wall targets have not yet been modelled.

## Course layouts

`ros2 launch sauvc_world sauvc.launch.py mode:=<mode>` selects the layout.
Pool, cameras and bridges are identical in both modes.

- `mode:=finals` (default): finals course. AUV starts in the 140 x 140 cm start
  zone on the south long wall of the deep section at (10.5, -11.8) facing +y.
  Gate 150 x 150 cm on the floor ~12 m from the start wall, orange flare 4-8 m
  from the start wall, 8 x 2 m green target mat with four drums (1 blue, 3 red)
  near the north wall, red/yellow/blue communication flares in the main arena.
  Positions are representative: they follow the
  [official 2025 arena diagram](https://raw.githubusercontent.com/sauvc/rulebook/016d4503b9d321f6db17b002a158877900d91079/img/arena-2025.jpg)
  (not to scale), object sizes follow the SAUVC 2027 rulebook v2027.3.2
  (30 Oct 2026, [sauvc.org/rulebook](https://sauvc.org/rulebook/)). The rules let
  the gate, flares and drum order vary between attempts, and give no drum
  spacing (2 m is assumed). Meshes come from `3d_pool_props.zip`, converted to
  OBJ with `tools/convert_dae_to_obj.py`.
- `mode:=qualification`: AUV starts at the shallow short wall at (-24.4, 0)
  facing +x. One qualification gate ~10 m ahead, modelled after the
  [official figure](https://sauvc.org/rulebook/img/qualification-gate.jpg): two
  orange 4 cm posts ~100 cm long hanging from the surface and a white 150 cm bar
  at the surface (no bottom bar). No other props.

The SAUVC 2026 rulebook (Sanya) describes a different venue (25 x 16 m indoor
pool, finals gate ~16 m from the start); it is not modelled here.

The previous 25 × 16 m pool with 1.2 m ends / 1.6 m centre matched the
[2026 Sanya qualification diagram](https://sauvc.org/rulebook/img/arena-2026-qualifiers.png).
It was replaced intentionally when the user requested the SP pool.

## Implementation and limits

The original generated textures approximate the Singapore finish, rather than
claiming an exact reconstruction. The following are **visual estimates**, not
official SAUVC specifications:

- floor tiles: 200 × 200 mm;
- wall tiles: 100 × 200 mm, long edge vertical;
- grout: 2 mm, shallow 0.4 mm relief represented by normal maps;
- navy lane stripes: 200 mm wide; layout and standard-derived assumptions above;
- navy wall band: 200 mm tall, just below the nominal waterline;
- non-metal ceramic, rougher grout, slight deterministic per-tile variation.

Albedo colors use muted blue-green ceramic and navy. The blue-green tint and
reduced brightness compensate visually for the existing ocean world's bright
lights and lack of underwater color attenuation: the first neutral ceramic
version rendered too white. This is an appearance approximation, not a
simulation of wavelength-dependent water absorption. Caustics, shadows and
reflections are not baked into the texture. The existing world lighting remains
in use, with lower material ambient brightness and rougher ceramic highlights.

The walls and three floor sections use seven box collisions and matching
low-poly visual meshes (12 triangles each). UVs use physical coordinates,
so the tile scale stays fixed as the pool grows and the grid aligns across
both slope junctions. Lane markings use a separate low-poly visual mesh,
rather than thousands of tile objects.

Generated PNGs and OBJ meshes are installed with the ROS package. Gazebo
resolves `model://pool/...` through the resource path set by `sauvc.launch.py`.

To regenerate assets from the repository root (requires numpy and Pillow):

```bash
python3 src/simulation/sauvc_world/tools/generate_pool_materials.py
colcon build --symlink-install --packages-select sauvc_world
```

The generator defines the pool dimensions/profile, writes `poolWalls.sdf`,
and generates its matching visual meshes and materials.
Generated assets are original repository assets; no external texture downloads
or generation tools are needed at simulation runtime.
