#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to dave_interfaces__srv__SetOriginSphericalCoord_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetOriginSphericalCoord_Request {
    /// Latitude. Positive is north of equator; negative is south.
    pub latitude_deg: f64,

    /// Longitude. Positive is east of prime meridian; negative is west.
    pub longitude_deg: f64,

    /// Altitude. Positive is above the WGS 84 ellipsoid
    pub altitude: f64,

}



impl Default for SetOriginSphericalCoord_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetOriginSphericalCoord_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetOriginSphericalCoord_Request {
  type RmwMsg = super::srv::rmw::SetOriginSphericalCoord_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        latitude_deg: msg.latitude_deg,
        longitude_deg: msg.longitude_deg,
        altitude: msg.altitude,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude: msg.altitude,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude: msg.altitude,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetOriginSphericalCoord_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetOriginSphericalCoord_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetOriginSphericalCoord_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetOriginSphericalCoord_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetOriginSphericalCoord_Response {
  type RmwMsg = super::srv::rmw::SetOriginSphericalCoord_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to dave_interfaces__srv__GetOriginSphericalCoord_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetOriginSphericalCoord_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetOriginSphericalCoord_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetOriginSphericalCoord_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetOriginSphericalCoord_Request {
  type RmwMsg = super::srv::rmw::GetOriginSphericalCoord_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to dave_interfaces__srv__GetOriginSphericalCoord_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetOriginSphericalCoord_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub latitude_deg: f64,

    /// Longitude. Positive is east of prime meridian; negative is west.
    pub longitude_deg: f64,

    /// Altitude. Positive is above the WGS 84 ellipsoid
    pub altitude: f64,

}



impl Default for GetOriginSphericalCoord_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetOriginSphericalCoord_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetOriginSphericalCoord_Response {
  type RmwMsg = super::srv::rmw::GetOriginSphericalCoord_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        latitude_deg: msg.latitude_deg,
        longitude_deg: msg.longitude_deg,
        altitude: msg.altitude,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude: msg.altitude,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude: msg.altitude,
    }
  }
}


// Corresponds to dave_interfaces__srv__TransformToSphericalCoord_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TransformToSphericalCoord_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub input: geometry_msgs::msg::Vector3,

}



impl Default for TransformToSphericalCoord_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TransformToSphericalCoord_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TransformToSphericalCoord_Request {
  type RmwMsg = super::srv::rmw::TransformToSphericalCoord_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        input: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.input)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        input: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.input)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      input: geometry_msgs::msg::Vector3::from_rmw_message(msg.input),
    }
  }
}


// Corresponds to dave_interfaces__srv__TransformToSphericalCoord_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TransformToSphericalCoord_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub latitude_deg: f64,

    /// Longitude. Positive is east of prime meridian; negative is west.
    pub longitude_deg: f64,

    /// Altitude. Positive is above the WGS 84 ellipsoid
    pub altitude: f64,

}



impl Default for TransformToSphericalCoord_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TransformToSphericalCoord_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TransformToSphericalCoord_Response {
  type RmwMsg = super::srv::rmw::TransformToSphericalCoord_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        latitude_deg: msg.latitude_deg,
        longitude_deg: msg.longitude_deg,
        altitude: msg.altitude,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude: msg.altitude,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude: msg.altitude,
    }
  }
}


// Corresponds to dave_interfaces__srv__TransformFromSphericalCoord_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TransformFromSphericalCoord_Request {
    /// Latitude. Positive is north of equator; negative is south.
    pub latitude_deg: f64,

    /// Longitude. Positive is east of prime meridian; negative is west.
    pub longitude_deg: f64,

    /// Altitude. Positive is above the WGS 84 ellipsoid
    pub altitude: f64,

}



impl Default for TransformFromSphericalCoord_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TransformFromSphericalCoord_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TransformFromSphericalCoord_Request {
  type RmwMsg = super::srv::rmw::TransformFromSphericalCoord_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        latitude_deg: msg.latitude_deg,
        longitude_deg: msg.longitude_deg,
        altitude: msg.altitude,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude: msg.altitude,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude: msg.altitude,
    }
  }
}


// Corresponds to dave_interfaces__srv__TransformFromSphericalCoord_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TransformFromSphericalCoord_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub output: geometry_msgs::msg::Vector3,

}



impl Default for TransformFromSphericalCoord_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TransformFromSphericalCoord_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TransformFromSphericalCoord_Response {
  type RmwMsg = super::srv::rmw::TransformFromSphericalCoord_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        output: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.output)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        output: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.output)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      output: geometry_msgs::msg::Vector3::from_rmw_message(msg.output),
    }
  }
}


// Corresponds to dave_interfaces__srv__GetCurrentModel_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentModel_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetCurrentModel_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCurrentModel_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetCurrentModel_Request {
  type RmwMsg = super::srv::rmw::GetCurrentModel_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to dave_interfaces__srv__GetCurrentModel_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentModel_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mean: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noise: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mu: f64,

}



impl Default for GetCurrentModel_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCurrentModel_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetCurrentModel_Response {
  type RmwMsg = super::srv::rmw::GetCurrentModel_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mean: msg.mean,
        min: msg.min,
        max: msg.max,
        noise: msg.noise,
        mu: msg.mu,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mean: msg.mean,
      min: msg.min,
      max: msg.max,
      noise: msg.noise,
      mu: msg.mu,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mean: msg.mean,
      min: msg.min,
      max: msg.max,
      noise: msg.noise,
      mu: msg.mu,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetCurrentModel_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCurrentModel_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mean: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub noise: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mu: f64,

}



impl Default for SetCurrentModel_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetCurrentModel_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetCurrentModel_Request {
  type RmwMsg = super::srv::rmw::SetCurrentModel_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mean: msg.mean,
        min: msg.min,
        max: msg.max,
        noise: msg.noise,
        mu: msg.mu,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mean: msg.mean,
      min: msg.min,
      max: msg.max,
      noise: msg.noise,
      mu: msg.mu,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mean: msg.mean,
      min: msg.min,
      max: msg.max,
      noise: msg.noise,
      mu: msg.mu,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetCurrentModel_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCurrentModel_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetCurrentModel_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetCurrentModel_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetCurrentModel_Response {
  type RmwMsg = super::srv::rmw::SetCurrentModel_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetCurrentDirection_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCurrentDirection_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f64,

}



impl Default for SetCurrentDirection_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetCurrentDirection_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetCurrentDirection_Request {
  type RmwMsg = super::srv::rmw::SetCurrentDirection_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        angle: msg.angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      angle: msg.angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      angle: msg.angle,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetCurrentDirection_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCurrentDirection_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetCurrentDirection_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetCurrentDirection_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetCurrentDirection_Response {
  type RmwMsg = super::srv::rmw::SetCurrentDirection_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetCurrentVelocity_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCurrentVelocity_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizontal_angle: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vertical_angle: f64,

}



impl Default for SetCurrentVelocity_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetCurrentVelocity_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetCurrentVelocity_Request {
  type RmwMsg = super::srv::rmw::SetCurrentVelocity_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        velocity: msg.velocity,
        horizontal_angle: msg.horizontal_angle,
        vertical_angle: msg.vertical_angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      velocity: msg.velocity,
      horizontal_angle: msg.horizontal_angle,
      vertical_angle: msg.vertical_angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      velocity: msg.velocity,
      horizontal_angle: msg.horizontal_angle,
      vertical_angle: msg.vertical_angle,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetCurrentVelocity_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCurrentVelocity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetCurrentVelocity_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetCurrentVelocity_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetCurrentVelocity_Response {
  type RmwMsg = super::srv::rmw::SetCurrentVelocity_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetStratifiedCurrentVelocity_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStratifiedCurrentVelocity_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub layer: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizontal_angle: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vertical_angle: f64,

}



impl Default for SetStratifiedCurrentVelocity_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStratifiedCurrentVelocity_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetStratifiedCurrentVelocity_Request {
  type RmwMsg = super::srv::rmw::SetStratifiedCurrentVelocity_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layer: msg.layer,
        velocity: msg.velocity,
        horizontal_angle: msg.horizontal_angle,
        vertical_angle: msg.vertical_angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      layer: msg.layer,
      velocity: msg.velocity,
      horizontal_angle: msg.horizontal_angle,
      vertical_angle: msg.vertical_angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layer: msg.layer,
      velocity: msg.velocity,
      horizontal_angle: msg.horizontal_angle,
      vertical_angle: msg.vertical_angle,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetStratifiedCurrentVelocity_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStratifiedCurrentVelocity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetStratifiedCurrentVelocity_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStratifiedCurrentVelocity_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetStratifiedCurrentVelocity_Response {
  type RmwMsg = super::srv::rmw::SetStratifiedCurrentVelocity_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetStratifiedCurrentDirection_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStratifiedCurrentDirection_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub layer: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f64,

}



impl Default for SetStratifiedCurrentDirection_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStratifiedCurrentDirection_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetStratifiedCurrentDirection_Request {
  type RmwMsg = super::srv::rmw::SetStratifiedCurrentDirection_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layer: msg.layer,
        angle: msg.angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      layer: msg.layer,
      angle: msg.angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layer: msg.layer,
      angle: msg.angle,
    }
  }
}


// Corresponds to dave_interfaces__srv__SetStratifiedCurrentDirection_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStratifiedCurrentDirection_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetStratifiedCurrentDirection_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStratifiedCurrentDirection_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetStratifiedCurrentDirection_Response {
  type RmwMsg = super::srv::rmw::SetStratifiedCurrentDirection_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}






#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetOriginSphericalCoord() -> *const std::ffi::c_void;
}

// Corresponds to dave_interfaces__srv__SetOriginSphericalCoord
#[allow(missing_docs, non_camel_case_types)]
pub struct SetOriginSphericalCoord;

impl rosidl_runtime_rs::Service for SetOriginSphericalCoord {
    type Request = SetOriginSphericalCoord_Request;
    type Response = SetOriginSphericalCoord_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetOriginSphericalCoord() }
    }
}




#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__GetOriginSphericalCoord() -> *const std::ffi::c_void;
}

// Corresponds to dave_interfaces__srv__GetOriginSphericalCoord
#[allow(missing_docs, non_camel_case_types)]
pub struct GetOriginSphericalCoord;

impl rosidl_runtime_rs::Service for GetOriginSphericalCoord {
    type Request = GetOriginSphericalCoord_Request;
    type Response = GetOriginSphericalCoord_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__GetOriginSphericalCoord() }
    }
}




#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__TransformToSphericalCoord() -> *const std::ffi::c_void;
}

// Corresponds to dave_interfaces__srv__TransformToSphericalCoord
#[allow(missing_docs, non_camel_case_types)]
pub struct TransformToSphericalCoord;

impl rosidl_runtime_rs::Service for TransformToSphericalCoord {
    type Request = TransformToSphericalCoord_Request;
    type Response = TransformToSphericalCoord_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__TransformToSphericalCoord() }
    }
}




#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__TransformFromSphericalCoord() -> *const std::ffi::c_void;
}

// Corresponds to dave_interfaces__srv__TransformFromSphericalCoord
#[allow(missing_docs, non_camel_case_types)]
pub struct TransformFromSphericalCoord;

impl rosidl_runtime_rs::Service for TransformFromSphericalCoord {
    type Request = TransformFromSphericalCoord_Request;
    type Response = TransformFromSphericalCoord_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__TransformFromSphericalCoord() }
    }
}




#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__GetCurrentModel() -> *const std::ffi::c_void;
}

// Corresponds to dave_interfaces__srv__GetCurrentModel
#[allow(missing_docs, non_camel_case_types)]
pub struct GetCurrentModel;

impl rosidl_runtime_rs::Service for GetCurrentModel {
    type Request = GetCurrentModel_Request;
    type Response = GetCurrentModel_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__GetCurrentModel() }
    }
}




#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetCurrentModel() -> *const std::ffi::c_void;
}

// Corresponds to dave_interfaces__srv__SetCurrentModel
#[allow(missing_docs, non_camel_case_types)]
pub struct SetCurrentModel;

impl rosidl_runtime_rs::Service for SetCurrentModel {
    type Request = SetCurrentModel_Request;
    type Response = SetCurrentModel_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetCurrentModel() }
    }
}




#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetCurrentDirection() -> *const std::ffi::c_void;
}

// Corresponds to dave_interfaces__srv__SetCurrentDirection
#[allow(missing_docs, non_camel_case_types)]
pub struct SetCurrentDirection;

impl rosidl_runtime_rs::Service for SetCurrentDirection {
    type Request = SetCurrentDirection_Request;
    type Response = SetCurrentDirection_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetCurrentDirection() }
    }
}




#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetCurrentVelocity() -> *const std::ffi::c_void;
}

// Corresponds to dave_interfaces__srv__SetCurrentVelocity
#[allow(missing_docs, non_camel_case_types)]
pub struct SetCurrentVelocity;

impl rosidl_runtime_rs::Service for SetCurrentVelocity {
    type Request = SetCurrentVelocity_Request;
    type Response = SetCurrentVelocity_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetCurrentVelocity() }
    }
}




#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentVelocity() -> *const std::ffi::c_void;
}

// Corresponds to dave_interfaces__srv__SetStratifiedCurrentVelocity
#[allow(missing_docs, non_camel_case_types)]
pub struct SetStratifiedCurrentVelocity;

impl rosidl_runtime_rs::Service for SetStratifiedCurrentVelocity {
    type Request = SetStratifiedCurrentVelocity_Request;
    type Response = SetStratifiedCurrentVelocity_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentVelocity() }
    }
}




#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentDirection() -> *const std::ffi::c_void;
}

// Corresponds to dave_interfaces__srv__SetStratifiedCurrentDirection
#[allow(missing_docs, non_camel_case_types)]
pub struct SetStratifiedCurrentDirection;

impl rosidl_runtime_rs::Service for SetStratifiedCurrentDirection {
    type Request = SetStratifiedCurrentDirection_Request;
    type Response = SetStratifiedCurrentDirection_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentDirection() }
    }
}


