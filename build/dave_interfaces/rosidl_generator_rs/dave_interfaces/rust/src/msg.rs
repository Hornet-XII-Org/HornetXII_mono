#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to dave_interfaces__msg__UsblCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UsblCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub transponder_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: std::string::String,

}



impl Default for UsblCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UsblCommand::default())
  }
}

impl rosidl_runtime_rs::Message for UsblCommand {
  type RmwMsg = super::msg::rmw::UsblCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        transponder_id: msg.transponder_id,
        command_id: msg.command_id,
        data: msg.data.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      transponder_id: msg.transponder_id,
      command_id: msg.command_id,
        data: msg.data.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      transponder_id: msg.transponder_id,
      command_id: msg.command_id,
      data: msg.data.to_string(),
    }
  }
}


// Corresponds to dave_interfaces__msg__UsblResponse

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UsblResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub transceiver_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub response_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: std::string::String,

}



impl Default for UsblResponse {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UsblResponse::default())
  }
}

impl rosidl_runtime_rs::Message for UsblResponse {
  type RmwMsg = super::msg::rmw::UsblResponse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        transceiver_id: msg.transceiver_id,
        response_id: msg.response_id,
        data: msg.data.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      transceiver_id: msg.transceiver_id,
      response_id: msg.response_id,
        data: msg.data.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      transceiver_id: msg.transceiver_id,
      response_id: msg.response_id,
      data: msg.data.to_string(),
    }
  }
}


// Corresponds to dave_interfaces__msg__Location

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Location {

    // This member is not documented.
    #[allow(missing_docs)]
    pub transponder_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,

}



impl Default for Location {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Location::default())
  }
}

impl rosidl_runtime_rs::Message for Location {
  type RmwMsg = super::msg::rmw::Location;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        transponder_id: msg.transponder_id,
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      transponder_id: msg.transponder_id,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      transponder_id: msg.transponder_id,
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


// Corresponds to dave_interfaces__msg__DVL

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DVL {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target: super::msg::DVLTarget,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::TwistWithCovariance,


    // This member is not documented.
    #[allow(missing_docs)]
    pub beams: Vec<super::msg::DVLBeam>,

}



impl Default for DVL {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DVL::default())
  }
}

impl rosidl_runtime_rs::Message for DVL {
  type RmwMsg = super::msg::rmw::DVL;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        type_: msg.type_.as_str().into(),
        target: super::msg::DVLTarget::into_rmw_message(std::borrow::Cow::Owned(msg.target)).into_owned(),
        velocity: geometry_msgs::msg::TwistWithCovariance::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
        beams: msg.beams
          .into_iter()
          .map(|elem| super::msg::DVLBeam::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        type_: msg.type_.as_str().into(),
        target: super::msg::DVLTarget::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target)).into_owned(),
        velocity: geometry_msgs::msg::TwistWithCovariance::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
        beams: msg.beams
          .iter()
          .map(|elem| super::msg::DVLBeam::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      type_: msg.type_.to_string(),
      target: super::msg::DVLTarget::from_rmw_message(msg.target),
      velocity: geometry_msgs::msg::TwistWithCovariance::from_rmw_message(msg.velocity),
      beams: msg.beams
          .into_iter()
          .map(super::msg::DVLBeam::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to dave_interfaces__msg__DVLBeam

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DVLBeam {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reference: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub range: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub locked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::TwistWithCovariance,

}



impl Default for DVLBeam {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DVLBeam::default())
  }
}

impl rosidl_runtime_rs::Message for DVLBeam {
  type RmwMsg = super::msg::rmw::DVLBeam;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        reference: msg.reference.as_str().into(),
        range: msg.range,
        locked: msg.locked,
        velocity: geometry_msgs::msg::TwistWithCovariance::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        reference: msg.reference.as_str().into(),
      range: msg.range,
      locked: msg.locked,
        velocity: geometry_msgs::msg::TwistWithCovariance::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      reference: msg.reference.to_string(),
      range: msg.range,
      locked: msg.locked,
      velocity: geometry_msgs::msg::TwistWithCovariance::from_rmw_message(msg.velocity),
    }
  }
}


// Corresponds to dave_interfaces__msg__DVLTarget

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DVLTarget {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub range: f64,

}



impl Default for DVLTarget {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DVLTarget::default())
  }
}

impl rosidl_runtime_rs::Message for DVLTarget {
  type RmwMsg = super::msg::rmw::DVLTarget;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_.as_str().into(),
        range: msg.range,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_.as_str().into(),
      range: msg.range,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_.to_string(),
      range: msg.range,
    }
  }
}


// Corresponds to dave_interfaces__msg__StratifiedCurrentVelocity
/// Publishes depths and velocities based on the database contents

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StratifiedCurrentVelocity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Depths
    pub depths: Vec<f32>,

    /// Velocities
    pub velocities: Vec<geometry_msgs::msg::Vector3>,

}



impl Default for StratifiedCurrentVelocity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StratifiedCurrentVelocity::default())
  }
}

impl rosidl_runtime_rs::Message for StratifiedCurrentVelocity {
  type RmwMsg = super::msg::rmw::StratifiedCurrentVelocity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        depths: msg.depths.as_slice().into(),
        velocities: msg.velocities
          .into_iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        depths: msg.depths.as_slice().into(),
        velocities: msg.velocities
          .iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      depths: msg.depths.into(),
      velocities: msg.velocities
          .into_iter()
          .map(geometry_msgs::msg::Vector3::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to dave_interfaces__msg__StratifiedCurrentDatabase
/// Publishes depths and velocities read from the csv database

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StratifiedCurrentDatabase {
    /// Depths
    pub depths: Vec<f32>,

    /// Velocities
    pub velocities: Vec<geometry_msgs::msg::Vector3>,

    /// Tide time (GMT)
    pub time_gmt_year: Vec<i16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_gmt_month: Vec<i16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_gmt_day: Vec<i16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_gmt_hour: Vec<i16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_gmt_minute: Vec<i16>,

    /// Tide velocities
    pub tidevelocities: Vec<f32>,

    /// Tide constituents
    pub tideconstituents: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub m2_amp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub m2_phase: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub m2_speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub s2_amp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub s2_phase: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub s2_speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub n2_amp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub n2_phase: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub n2_speed: f32,

    /// Tide direction
    pub ebb_direction: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flood_direction: f32,

    /// World start time (GMT)
    pub world_start_time_year: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world_start_time_month: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world_start_time_day: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world_start_time_hour: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world_start_time_minute: i16,

}



impl Default for StratifiedCurrentDatabase {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StratifiedCurrentDatabase::default())
  }
}

impl rosidl_runtime_rs::Message for StratifiedCurrentDatabase {
  type RmwMsg = super::msg::rmw::StratifiedCurrentDatabase;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        depths: msg.depths.as_slice().into(),
        velocities: msg.velocities
          .into_iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        time_gmt_year: msg.time_gmt_year.as_slice().into(),
        time_gmt_month: msg.time_gmt_month.as_slice().into(),
        time_gmt_day: msg.time_gmt_day.as_slice().into(),
        time_gmt_hour: msg.time_gmt_hour.as_slice().into(),
        time_gmt_minute: msg.time_gmt_minute.as_slice().into(),
        tidevelocities: msg.tidevelocities.as_slice().into(),
        tideconstituents: msg.tideconstituents,
        m2_amp: msg.m2_amp,
        m2_phase: msg.m2_phase,
        m2_speed: msg.m2_speed,
        s2_amp: msg.s2_amp,
        s2_phase: msg.s2_phase,
        s2_speed: msg.s2_speed,
        n2_amp: msg.n2_amp,
        n2_phase: msg.n2_phase,
        n2_speed: msg.n2_speed,
        ebb_direction: msg.ebb_direction,
        flood_direction: msg.flood_direction,
        world_start_time_year: msg.world_start_time_year,
        world_start_time_month: msg.world_start_time_month,
        world_start_time_day: msg.world_start_time_day,
        world_start_time_hour: msg.world_start_time_hour,
        world_start_time_minute: msg.world_start_time_minute,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        depths: msg.depths.as_slice().into(),
        velocities: msg.velocities
          .iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        time_gmt_year: msg.time_gmt_year.as_slice().into(),
        time_gmt_month: msg.time_gmt_month.as_slice().into(),
        time_gmt_day: msg.time_gmt_day.as_slice().into(),
        time_gmt_hour: msg.time_gmt_hour.as_slice().into(),
        time_gmt_minute: msg.time_gmt_minute.as_slice().into(),
        tidevelocities: msg.tidevelocities.as_slice().into(),
      tideconstituents: msg.tideconstituents,
      m2_amp: msg.m2_amp,
      m2_phase: msg.m2_phase,
      m2_speed: msg.m2_speed,
      s2_amp: msg.s2_amp,
      s2_phase: msg.s2_phase,
      s2_speed: msg.s2_speed,
      n2_amp: msg.n2_amp,
      n2_phase: msg.n2_phase,
      n2_speed: msg.n2_speed,
      ebb_direction: msg.ebb_direction,
      flood_direction: msg.flood_direction,
      world_start_time_year: msg.world_start_time_year,
      world_start_time_month: msg.world_start_time_month,
      world_start_time_day: msg.world_start_time_day,
      world_start_time_hour: msg.world_start_time_hour,
      world_start_time_minute: msg.world_start_time_minute,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      depths: msg.depths.into(),
      velocities: msg.velocities
          .into_iter()
          .map(geometry_msgs::msg::Vector3::from_rmw_message)
          .collect(),
      time_gmt_year: msg.time_gmt_year.into(),
      time_gmt_month: msg.time_gmt_month.into(),
      time_gmt_day: msg.time_gmt_day.into(),
      time_gmt_hour: msg.time_gmt_hour.into(),
      time_gmt_minute: msg.time_gmt_minute.into(),
      tidevelocities: msg.tidevelocities.into(),
      tideconstituents: msg.tideconstituents,
      m2_amp: msg.m2_amp,
      m2_phase: msg.m2_phase,
      m2_speed: msg.m2_speed,
      s2_amp: msg.s2_amp,
      s2_phase: msg.s2_phase,
      s2_speed: msg.s2_speed,
      n2_amp: msg.n2_amp,
      n2_phase: msg.n2_phase,
      n2_speed: msg.n2_speed,
      ebb_direction: msg.ebb_direction,
      flood_direction: msg.flood_direction,
      world_start_time_year: msg.world_start_time_year,
      world_start_time_month: msg.world_start_time_month,
      world_start_time_day: msg.world_start_time_day,
      world_start_time_hour: msg.world_start_time_hour,
      world_start_time_minute: msg.world_start_time_minute,
    }
  }
}


