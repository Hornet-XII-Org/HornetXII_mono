"""ROS-independent waypoint sequencing, gate geometry and reference limiting."""
from dataclasses import dataclass
import math


def wrap(angle):
    return math.atan2(math.sin(angle), math.cos(angle))


@dataclass(frozen=True)
class Pose:
    x: float
    y: float
    z: float
    yaw: float

    def __post_init__(self):
        if not all(math.isfinite(v) for v in (self.x, self.y, self.z, self.yaw)):
            raise ValueError('Pose values must be finite')

    def distance(self, other):
        return math.dist((self.x, self.y, self.z), (other.x, other.y, other.z))


@dataclass(frozen=True)
class Waypoint:
    name: str
    pose: Pose


@dataclass(frozen=True)
class Gate:
    center: Pose
    width: float = 1.5
    height: float = 1.0
    thickness: float = 0.1
    vehicle_length: float = 0.6
    vehicle_width: float = 0.5
    vehicle_height: float = 0.4
    margin: float = 0.1

    def __post_init__(self):
        values = (self.width, self.height, self.thickness, self.vehicle_length,
                  self.vehicle_width, self.vehicle_height, self.margin)
        if not all(math.isfinite(v) and v > 0 for v in values):
            raise ValueError('Gate, vehicle and margin dimensions must be positive')
        if self.vehicle_width + 2*self.margin >= self.width or self.vehicle_height + 2*self.margin >= self.height:
            raise ValueError('Vehicle and clearance margin do not fit through gate')

    def coordinates(self, pose):
        dx, dy = pose.x-self.center.x, pose.y-self.center.y
        c, s = math.cos(self.center.yaw), math.sin(self.center.yaw)
        return c*dx+s*dy, -s*dx+c*dy

    def clearance_error(self, pose):
        normal, lateral = self.coordinates(pose)
        angle = pose.yaw-self.center.yaw
        a, b = abs(math.cos(angle)), abs(math.sin(angle))
        normal_extent = (a*self.vehicle_length+b*self.vehicle_width)/2
        lateral_extent = (b*self.vehicle_length+a*self.vehicle_width)/2
        if abs(normal) > normal_extent+self.thickness/2+self.margin:
            return ''
        if abs(lateral)+lateral_extent+self.margin >= self.width/2:
            return 'gate lateral clearance violated'
        if abs(pose.z-self.center.z)+self.vehicle_height/2+self.margin >= self.height/2:
            return 'gate vertical clearance violated'
        return ''


def qualification(start, gate, approach_distance=1.5, exit_distance=1.0):
    """Turn in place only after the whole conservative footprint clears the gate."""
    if min(approach_distance, exit_distance) <= math.hypot(gate.vehicle_length, gate.vehicle_width)/2 + gate.thickness/2 + gate.margin:
        raise ValueError('Approach/exit distance is too short for turning clearance')
    if gate.coordinates(start)[0] >= -approach_distance:
        raise ValueError('Start upstream of the gate approach point')
    c, s = math.cos(gate.center.yaw), math.sin(gate.center.yaw)
    def point(distance, yaw):
        return Pose(gate.center.x+c*distance, gate.center.y+s*distance, gate.center.z, wrap(yaw))
    outbound = point(exit_distance, gate.center.yaw)
    return [
        Waypoint('DIVE', Pose(start.x, start.y, gate.center.z, start.yaw)),
        Waypoint('ALIGN', Pose(start.x, start.y, gate.center.z, gate.center.yaw)),
        Waypoint('APPROACH', point(-approach_distance, gate.center.yaw)),
        Waypoint('CROSS_OUT', outbound),
        Waypoint('U_TURN', Pose(outbound.x, outbound.y, outbound.z, wrap(gate.center.yaw+math.pi))),
        Waypoint('CROSS_BACK', point(-approach_distance, gate.center.yaw+math.pi)),
    ]


def advance_reference(current, target, dt, linear_speed, yaw_rate):
    distance = current.distance(target)
    fraction = min(1.0, linear_speed*dt/distance) if distance else 1.0
    yaw_step = max(-yaw_rate*dt, min(yaw_rate*dt, wrap(target.yaw-current.yaw)))
    return Pose(current.x+(target.x-current.x)*fraction,
                current.y+(target.y-current.y)*fraction,
                current.z+(target.z-current.z)*fraction,
                wrap(current.yaw+yaw_step))


class Executor:
    def __init__(self, *, position_tolerance=0.12, yaw_tolerance=0.10,
                 speed_tolerance=0.08, yaw_speed_tolerance=0.08, settle_time=0.7,
                 waypoint_timeout=120.0, linear_speed=0.2, yaw_rate=0.35,
                 max_reference_lead=0.35):
        self.settings = locals().copy()
        self.settings.pop('self')
        if not all(math.isfinite(v) and v > 0 for v in self.settings.values()):
            raise ValueError('Executor settings must be finite and positive')
        self.state, self.reason = 'IDLE', ''
        self.waypoints, self.index = [], 0
        self.reference = None
        self.last_time = self.entered = self.settled_since = None

    def start(self, waypoints, pose, now):
        if self.state == 'RUNNING':
            raise ValueError('Mission is already running')
        if not waypoints:
            raise ValueError('Mission needs at least one waypoint')
        self.waypoints, self.index = list(waypoints), 0
        self.reference = pose
        self.last_time = self.entered = now
        self.settled_since = None
        self.state, self.reason = 'RUNNING', ''

    @property
    def phase(self):
        return self.waypoints[self.index].name if self.state == 'RUNNING' else self.state

    def stop(self, state, reason, pose):
        self.state, self.reason, self.reference = state, reason, pose

    def tick(self, pose, speed, yaw_speed, now):
        if self.state != 'RUNNING':
            return self.reference
        dt = now-self.last_time
        self.last_time = now
        if dt < 0:
            self.stop('FAILED', 'simulation clock moved backwards; restart mission', pose)
            return self.reference
        if now-self.entered > self.settings['waypoint_timeout']:
            self.stop('FAILED', f'{self.phase} timed out', pose)
            return self.reference
        target = self.waypoints[self.index].pose
        self.reference = advance_reference(self.reference, target, min(dt, 0.2),
                                           self.settings['linear_speed'], self.settings['yaw_rate'])
        # Keep a stalled vehicle's moving reference nearby rather than marching away.
        lead = self.reference.distance(pose)
        if lead > self.settings['max_reference_lead']:
            f = self.settings['max_reference_lead']/lead
            self.reference = Pose(pose.x+(self.reference.x-pose.x)*f,
                                  pose.y+(self.reference.y-pose.y)*f,
                                  pose.z+(self.reference.z-pose.z)*f, self.reference.yaw)
        reached = (pose.distance(target) <= self.settings['position_tolerance']
                   and abs(wrap(pose.yaw-target.yaw)) <= self.settings['yaw_tolerance']
                   and speed <= self.settings['speed_tolerance']
                   and abs(yaw_speed) <= self.settings['yaw_speed_tolerance'])
        if not reached:
            self.settled_since = None
        elif self.settled_since is None:
            self.settled_since = now
        elif now-self.settled_since >= self.settings['settle_time']:
            self.index += 1
            self.entered, self.settled_since = now, None
            if self.index == len(self.waypoints):
                self.stop('COMPLETE', 'all waypoints reached; holding final pose', target)
        return self.reference
