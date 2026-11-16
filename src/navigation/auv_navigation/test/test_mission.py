import math

import pytest

from auv_navigation.mission import Executor, Gate, Pose, Waypoint, advance_reference, qualification, wrap


def test_qualification_clears_gate_before_turning_and_returns_facing_back():
    gate = Gate(Pose(-15, 0, -0.55, 0))
    route = qualification(Pose(-24.4, 0.2, -0.65, 0.1), gate)
    assert [w.name for w in route] == ['DIVE', 'ALIGN', 'APPROACH', 'CROSS_OUT', 'U_TURN', 'CROSS_BACK']
    assert route[3].pose.x > gate.center.x+gate.vehicle_length/2+gate.margin
    assert route[4].pose.distance(route[3].pose) == 0
    assert abs(wrap(route[4].pose.yaw-route[3].pose.yaw)) == pytest.approx(math.pi)
    assert route[-1].pose.x < gate.center.x-gate.vehicle_length/2-gate.margin
    assert route[-1].pose.yaw == pytest.approx(math.pi)


def test_rotated_offset_gate_uses_its_normal_not_world_x():
    gate = Gate(Pose(4, 5, -0.6, math.pi/2))
    route = qualification(Pose(4, 0, -0.6, 0), gate)
    assert route[2].pose.x == pytest.approx(4)
    assert route[2].pose.y == pytest.approx(3.5)
    assert route[3].pose.y == pytest.approx(6)


@pytest.mark.parametrize('start,approach,exit', [
    (Pose(0, 0, -0.5, 0), 1.5, 1),
    (Pose(-5, 0, -0.5, 0), 0.1, 1),
    (Pose(-5, 0, -0.5, 0), 1.5, 0.1),
])
def test_unsafe_start_or_turning_clearance_rejected(start, approach, exit):
    with pytest.raises(ValueError):
        qualification(start, Gate(Pose(0, 0, -0.5, 0)), approach, exit)


def test_reference_limits_translation_and_wraps_yaw_across_pi():
    pose = advance_reference(Pose(0, 0, 0, math.radians(179)),
                             Pose(3, 4, 0, math.radians(-179)), 0.1, 0.2, 0.1)
    assert pose.distance(Pose(0, 0, 0, 0)) == pytest.approx(0.02)
    assert wrap(pose.yaw-math.radians(179)) == pytest.approx(0.01)


def test_arrival_requires_heading_speed_and_uninterrupted_settling():
    target = Pose(1, 0, -0.5, math.pi)
    e = Executor(settle_time=0.5)
    e.start([Waypoint('TURN', target)], target, 0)
    e.tick(Pose(1, 0, -0.5, 0), 0, 0, 1)
    e.tick(target, 0.2, 0, 2)
    e.tick(target, 0, 0.2, 3)
    assert e.settled_since is None
    e.tick(target, 0, 0, 4)
    e.tick(Pose(1.5, 0, -0.5, math.pi), 0, 0, 4.4)
    e.tick(target, 0, 0, 5)
    e.tick(target, 0, 0, 5.6)
    assert e.state == 'COMPLETE'


def test_timeout_and_clock_reset_fail_and_hold_measured_pose():
    pose = Pose(0, 0, -0.5, 0)
    e = Executor(waypoint_timeout=2)
    route = [Waypoint('MOVE', Pose(4, 0, -0.5, 0))]
    e.start(route, pose, 10)
    assert e.tick(pose, 0, 0, 9) == pose
    assert e.state == 'FAILED'
    e.start(route, pose, 10)
    e.tick(pose, 0, 0, 13)
    assert e.state == 'FAILED'
    assert 'timed out' in e.reason
    assert e.reference == pose


def test_stalled_vehicle_reference_has_bounded_lead():
    pose = Pose(0, 0, -0.5, 0)
    e = Executor(max_reference_lead=0.3)
    e.start([Waypoint('MOVE', Pose(10, 0, -0.5, 0))], pose, 0)
    for i in range(100):
        e.tick(pose, 0, 0, i*0.1)
    assert e.reference.distance(pose) <= 0.30000001


def test_cancellation_holds_pose_and_never_resumes_without_start():
    pose = Pose(0, 0, -0.5, 0)
    e = Executor()
    e.start([Waypoint('MOVE', Pose(4, 0, -0.5, 0))], pose, 0)
    e.tick(pose, 0, 0, 0.1)
    e.stop('CANCELED', 'operator', pose)
    assert e.tick(Pose(0.2, 0, -0.5, 0), 0, 0, 10) == pose
    assert e.state == 'CANCELED'


def test_start_while_running_does_not_replace_active_route():
    pose = Pose(0, 0, -0.5, 0)
    e = Executor()
    route = [Waypoint('FIRST', Pose(1, 0, -0.5, 0))]
    e.start(route, pose, 0)
    with pytest.raises(ValueError):
        e.start([Waypoint('SECOND', Pose(2, 0, -0.5, 0))], pose, 1)
    assert e.phase == 'FIRST'


def test_gate_clearance_accounts_for_orientation_and_vertical_body_extent():
    gate = Gate(Pose(0, 0, -0.55, 0), vehicle_length=0.9)
    assert not gate.clearance_error(Pose(0, 0.25, -0.55, 0))
    assert 'lateral' in gate.clearance_error(Pose(0, 0.25, -0.55, math.pi/2))
    assert 'vertical' in gate.clearance_error(Pose(0, 0, -0.25, 0))
    assert not gate.clearance_error(Pose(2, 1, -0.1, 0))


def test_complete_qualification_with_an_ideal_pose_follower():
    pose = Pose(-24.4, 0.2, -0.65, 0.1)
    gate = Gate(Pose(-15, 0, -0.55, 0))
    e = Executor()
    e.start(qualification(pose, gate), pose, 0)
    phases = set()
    speed = yaw_speed = 0.0
    for i in range(6000):
        phases.add(e.phase)
        old = pose
        reference = e.tick(pose, speed, yaw_speed, i*0.05)
        pose = advance_reference(pose, reference, 0.05, 0.3, 0.5)
        speed = pose.distance(old)/0.05
        yaw_speed = wrap(pose.yaw-old.yaw)/0.05
        assert not gate.clearance_error(pose)
        if e.state == 'COMPLETE':
            break
    assert e.state == 'COMPLETE'
    assert 'U_TURN' in phases and 'CROSS_BACK' in phases


@pytest.mark.parametrize('factory', [
    lambda: Pose(float('nan'), 0, 0, 0),
    lambda: Gate(Pose(0, 0, 0, 0), width=0.3),
    lambda: Executor(linear_speed=-1),
])
def test_invalid_geometry_and_settings_rejected(factory):
    with pytest.raises(ValueError):
        factory()
