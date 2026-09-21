#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetOriginSphericalCoord_Request() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetOriginSphericalCoord_Request__init(msg: *mut SetOriginSphericalCoord_Request) -> bool;
    fn dave_interfaces__srv__SetOriginSphericalCoord_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetOriginSphericalCoord_Request>, size: usize) -> bool;
    fn dave_interfaces__srv__SetOriginSphericalCoord_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetOriginSphericalCoord_Request>);
    fn dave_interfaces__srv__SetOriginSphericalCoord_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetOriginSphericalCoord_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetOriginSphericalCoord_Request>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetOriginSphericalCoord_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetOriginSphericalCoord_Request__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetOriginSphericalCoord_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetOriginSphericalCoord_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetOriginSphericalCoord_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetOriginSphericalCoord_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetOriginSphericalCoord_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetOriginSphericalCoord_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetOriginSphericalCoord_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetOriginSphericalCoord_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetOriginSphericalCoord_Request() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetOriginSphericalCoord_Response() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetOriginSphericalCoord_Response__init(msg: *mut SetOriginSphericalCoord_Response) -> bool;
    fn dave_interfaces__srv__SetOriginSphericalCoord_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetOriginSphericalCoord_Response>, size: usize) -> bool;
    fn dave_interfaces__srv__SetOriginSphericalCoord_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetOriginSphericalCoord_Response>);
    fn dave_interfaces__srv__SetOriginSphericalCoord_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetOriginSphericalCoord_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetOriginSphericalCoord_Response>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetOriginSphericalCoord_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetOriginSphericalCoord_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetOriginSphericalCoord_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetOriginSphericalCoord_Response__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetOriginSphericalCoord_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetOriginSphericalCoord_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetOriginSphericalCoord_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetOriginSphericalCoord_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetOriginSphericalCoord_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetOriginSphericalCoord_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetOriginSphericalCoord_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetOriginSphericalCoord_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetOriginSphericalCoord_Response() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__GetOriginSphericalCoord_Request() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__GetOriginSphericalCoord_Request__init(msg: *mut GetOriginSphericalCoord_Request) -> bool;
    fn dave_interfaces__srv__GetOriginSphericalCoord_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetOriginSphericalCoord_Request>, size: usize) -> bool;
    fn dave_interfaces__srv__GetOriginSphericalCoord_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetOriginSphericalCoord_Request>);
    fn dave_interfaces__srv__GetOriginSphericalCoord_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetOriginSphericalCoord_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetOriginSphericalCoord_Request>) -> bool;
}

// Corresponds to dave_interfaces__srv__GetOriginSphericalCoord_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetOriginSphericalCoord_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetOriginSphericalCoord_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__GetOriginSphericalCoord_Request__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__GetOriginSphericalCoord_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetOriginSphericalCoord_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetOriginSphericalCoord_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetOriginSphericalCoord_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetOriginSphericalCoord_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetOriginSphericalCoord_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetOriginSphericalCoord_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/GetOriginSphericalCoord_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__GetOriginSphericalCoord_Request() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__GetOriginSphericalCoord_Response() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__GetOriginSphericalCoord_Response__init(msg: *mut GetOriginSphericalCoord_Response) -> bool;
    fn dave_interfaces__srv__GetOriginSphericalCoord_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetOriginSphericalCoord_Response>, size: usize) -> bool;
    fn dave_interfaces__srv__GetOriginSphericalCoord_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetOriginSphericalCoord_Response>);
    fn dave_interfaces__srv__GetOriginSphericalCoord_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetOriginSphericalCoord_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetOriginSphericalCoord_Response>) -> bool;
}

// Corresponds to dave_interfaces__srv__GetOriginSphericalCoord_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__GetOriginSphericalCoord_Response__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__GetOriginSphericalCoord_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetOriginSphericalCoord_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetOriginSphericalCoord_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetOriginSphericalCoord_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetOriginSphericalCoord_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetOriginSphericalCoord_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetOriginSphericalCoord_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/GetOriginSphericalCoord_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__GetOriginSphericalCoord_Response() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__TransformToSphericalCoord_Request() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__TransformToSphericalCoord_Request__init(msg: *mut TransformToSphericalCoord_Request) -> bool;
    fn dave_interfaces__srv__TransformToSphericalCoord_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TransformToSphericalCoord_Request>, size: usize) -> bool;
    fn dave_interfaces__srv__TransformToSphericalCoord_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TransformToSphericalCoord_Request>);
    fn dave_interfaces__srv__TransformToSphericalCoord_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TransformToSphericalCoord_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TransformToSphericalCoord_Request>) -> bool;
}

// Corresponds to dave_interfaces__srv__TransformToSphericalCoord_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TransformToSphericalCoord_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub input: geometry_msgs::msg::rmw::Vector3,

}



impl Default for TransformToSphericalCoord_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__TransformToSphericalCoord_Request__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__TransformToSphericalCoord_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TransformToSphericalCoord_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformToSphericalCoord_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformToSphericalCoord_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformToSphericalCoord_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TransformToSphericalCoord_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TransformToSphericalCoord_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/TransformToSphericalCoord_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__TransformToSphericalCoord_Request() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__TransformToSphericalCoord_Response() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__TransformToSphericalCoord_Response__init(msg: *mut TransformToSphericalCoord_Response) -> bool;
    fn dave_interfaces__srv__TransformToSphericalCoord_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TransformToSphericalCoord_Response>, size: usize) -> bool;
    fn dave_interfaces__srv__TransformToSphericalCoord_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TransformToSphericalCoord_Response>);
    fn dave_interfaces__srv__TransformToSphericalCoord_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TransformToSphericalCoord_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TransformToSphericalCoord_Response>) -> bool;
}

// Corresponds to dave_interfaces__srv__TransformToSphericalCoord_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__TransformToSphericalCoord_Response__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__TransformToSphericalCoord_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TransformToSphericalCoord_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformToSphericalCoord_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformToSphericalCoord_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformToSphericalCoord_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TransformToSphericalCoord_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TransformToSphericalCoord_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/TransformToSphericalCoord_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__TransformToSphericalCoord_Response() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__TransformFromSphericalCoord_Request() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__TransformFromSphericalCoord_Request__init(msg: *mut TransformFromSphericalCoord_Request) -> bool;
    fn dave_interfaces__srv__TransformFromSphericalCoord_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TransformFromSphericalCoord_Request>, size: usize) -> bool;
    fn dave_interfaces__srv__TransformFromSphericalCoord_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TransformFromSphericalCoord_Request>);
    fn dave_interfaces__srv__TransformFromSphericalCoord_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TransformFromSphericalCoord_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TransformFromSphericalCoord_Request>) -> bool;
}

// Corresponds to dave_interfaces__srv__TransformFromSphericalCoord_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__TransformFromSphericalCoord_Request__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__TransformFromSphericalCoord_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TransformFromSphericalCoord_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformFromSphericalCoord_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformFromSphericalCoord_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformFromSphericalCoord_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TransformFromSphericalCoord_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TransformFromSphericalCoord_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/TransformFromSphericalCoord_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__TransformFromSphericalCoord_Request() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__TransformFromSphericalCoord_Response() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__TransformFromSphericalCoord_Response__init(msg: *mut TransformFromSphericalCoord_Response) -> bool;
    fn dave_interfaces__srv__TransformFromSphericalCoord_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TransformFromSphericalCoord_Response>, size: usize) -> bool;
    fn dave_interfaces__srv__TransformFromSphericalCoord_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TransformFromSphericalCoord_Response>);
    fn dave_interfaces__srv__TransformFromSphericalCoord_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TransformFromSphericalCoord_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TransformFromSphericalCoord_Response>) -> bool;
}

// Corresponds to dave_interfaces__srv__TransformFromSphericalCoord_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TransformFromSphericalCoord_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub output: geometry_msgs::msg::rmw::Vector3,

}



impl Default for TransformFromSphericalCoord_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__TransformFromSphericalCoord_Response__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__TransformFromSphericalCoord_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TransformFromSphericalCoord_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformFromSphericalCoord_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformFromSphericalCoord_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__TransformFromSphericalCoord_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TransformFromSphericalCoord_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TransformFromSphericalCoord_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/TransformFromSphericalCoord_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__TransformFromSphericalCoord_Response() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__GetCurrentModel_Request() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__GetCurrentModel_Request__init(msg: *mut GetCurrentModel_Request) -> bool;
    fn dave_interfaces__srv__GetCurrentModel_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentModel_Request>, size: usize) -> bool;
    fn dave_interfaces__srv__GetCurrentModel_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentModel_Request>);
    fn dave_interfaces__srv__GetCurrentModel_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCurrentModel_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCurrentModel_Request>) -> bool;
}

// Corresponds to dave_interfaces__srv__GetCurrentModel_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentModel_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetCurrentModel_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__GetCurrentModel_Request__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__GetCurrentModel_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCurrentModel_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetCurrentModel_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetCurrentModel_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetCurrentModel_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCurrentModel_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCurrentModel_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/GetCurrentModel_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__GetCurrentModel_Request() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__GetCurrentModel_Response() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__GetCurrentModel_Response__init(msg: *mut GetCurrentModel_Response) -> bool;
    fn dave_interfaces__srv__GetCurrentModel_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentModel_Response>, size: usize) -> bool;
    fn dave_interfaces__srv__GetCurrentModel_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentModel_Response>);
    fn dave_interfaces__srv__GetCurrentModel_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCurrentModel_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCurrentModel_Response>) -> bool;
}

// Corresponds to dave_interfaces__srv__GetCurrentModel_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__GetCurrentModel_Response__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__GetCurrentModel_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCurrentModel_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetCurrentModel_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetCurrentModel_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__GetCurrentModel_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCurrentModel_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCurrentModel_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/GetCurrentModel_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__GetCurrentModel_Response() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentModel_Request() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetCurrentModel_Request__init(msg: *mut SetCurrentModel_Request) -> bool;
    fn dave_interfaces__srv__SetCurrentModel_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentModel_Request>, size: usize) -> bool;
    fn dave_interfaces__srv__SetCurrentModel_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentModel_Request>);
    fn dave_interfaces__srv__SetCurrentModel_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCurrentModel_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCurrentModel_Request>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetCurrentModel_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetCurrentModel_Request__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetCurrentModel_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCurrentModel_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentModel_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentModel_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentModel_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCurrentModel_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCurrentModel_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetCurrentModel_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentModel_Request() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentModel_Response() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetCurrentModel_Response__init(msg: *mut SetCurrentModel_Response) -> bool;
    fn dave_interfaces__srv__SetCurrentModel_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentModel_Response>, size: usize) -> bool;
    fn dave_interfaces__srv__SetCurrentModel_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentModel_Response>);
    fn dave_interfaces__srv__SetCurrentModel_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCurrentModel_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCurrentModel_Response>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetCurrentModel_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCurrentModel_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetCurrentModel_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetCurrentModel_Response__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetCurrentModel_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCurrentModel_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentModel_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentModel_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentModel_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCurrentModel_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCurrentModel_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetCurrentModel_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentModel_Response() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentDirection_Request() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetCurrentDirection_Request__init(msg: *mut SetCurrentDirection_Request) -> bool;
    fn dave_interfaces__srv__SetCurrentDirection_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentDirection_Request>, size: usize) -> bool;
    fn dave_interfaces__srv__SetCurrentDirection_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentDirection_Request>);
    fn dave_interfaces__srv__SetCurrentDirection_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCurrentDirection_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCurrentDirection_Request>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetCurrentDirection_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCurrentDirection_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f64,

}



impl Default for SetCurrentDirection_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetCurrentDirection_Request__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetCurrentDirection_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCurrentDirection_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentDirection_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentDirection_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentDirection_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCurrentDirection_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCurrentDirection_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetCurrentDirection_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentDirection_Request() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentDirection_Response() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetCurrentDirection_Response__init(msg: *mut SetCurrentDirection_Response) -> bool;
    fn dave_interfaces__srv__SetCurrentDirection_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentDirection_Response>, size: usize) -> bool;
    fn dave_interfaces__srv__SetCurrentDirection_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentDirection_Response>);
    fn dave_interfaces__srv__SetCurrentDirection_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCurrentDirection_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCurrentDirection_Response>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetCurrentDirection_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCurrentDirection_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetCurrentDirection_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetCurrentDirection_Response__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetCurrentDirection_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCurrentDirection_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentDirection_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentDirection_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentDirection_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCurrentDirection_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCurrentDirection_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetCurrentDirection_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentDirection_Response() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentVelocity_Request() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetCurrentVelocity_Request__init(msg: *mut SetCurrentVelocity_Request) -> bool;
    fn dave_interfaces__srv__SetCurrentVelocity_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentVelocity_Request>, size: usize) -> bool;
    fn dave_interfaces__srv__SetCurrentVelocity_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentVelocity_Request>);
    fn dave_interfaces__srv__SetCurrentVelocity_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCurrentVelocity_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCurrentVelocity_Request>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetCurrentVelocity_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetCurrentVelocity_Request__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetCurrentVelocity_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCurrentVelocity_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentVelocity_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentVelocity_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentVelocity_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCurrentVelocity_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCurrentVelocity_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetCurrentVelocity_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentVelocity_Request() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentVelocity_Response() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetCurrentVelocity_Response__init(msg: *mut SetCurrentVelocity_Response) -> bool;
    fn dave_interfaces__srv__SetCurrentVelocity_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentVelocity_Response>, size: usize) -> bool;
    fn dave_interfaces__srv__SetCurrentVelocity_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCurrentVelocity_Response>);
    fn dave_interfaces__srv__SetCurrentVelocity_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCurrentVelocity_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCurrentVelocity_Response>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetCurrentVelocity_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCurrentVelocity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetCurrentVelocity_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetCurrentVelocity_Response__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetCurrentVelocity_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCurrentVelocity_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentVelocity_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentVelocity_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetCurrentVelocity_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCurrentVelocity_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCurrentVelocity_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetCurrentVelocity_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetCurrentVelocity_Response() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentVelocity_Request() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__init(msg: *mut SetStratifiedCurrentVelocity_Request) -> bool;
    fn dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentVelocity_Request>, size: usize) -> bool;
    fn dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentVelocity_Request>);
    fn dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStratifiedCurrentVelocity_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentVelocity_Request>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetStratifiedCurrentVelocity_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStratifiedCurrentVelocity_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStratifiedCurrentVelocity_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStratifiedCurrentVelocity_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetStratifiedCurrentVelocity_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentVelocity_Request() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentVelocity_Response() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__init(msg: *mut SetStratifiedCurrentVelocity_Response) -> bool;
    fn dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentVelocity_Response>, size: usize) -> bool;
    fn dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentVelocity_Response>);
    fn dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStratifiedCurrentVelocity_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentVelocity_Response>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetStratifiedCurrentVelocity_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStratifiedCurrentVelocity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetStratifiedCurrentVelocity_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStratifiedCurrentVelocity_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStratifiedCurrentVelocity_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStratifiedCurrentVelocity_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetStratifiedCurrentVelocity_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentVelocity_Response() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentDirection_Request() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetStratifiedCurrentDirection_Request__init(msg: *mut SetStratifiedCurrentDirection_Request) -> bool;
    fn dave_interfaces__srv__SetStratifiedCurrentDirection_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentDirection_Request>, size: usize) -> bool;
    fn dave_interfaces__srv__SetStratifiedCurrentDirection_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentDirection_Request>);
    fn dave_interfaces__srv__SetStratifiedCurrentDirection_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStratifiedCurrentDirection_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentDirection_Request>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetStratifiedCurrentDirection_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetStratifiedCurrentDirection_Request__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetStratifiedCurrentDirection_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStratifiedCurrentDirection_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentDirection_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentDirection_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentDirection_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStratifiedCurrentDirection_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStratifiedCurrentDirection_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetStratifiedCurrentDirection_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentDirection_Request() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentDirection_Response() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__srv__SetStratifiedCurrentDirection_Response__init(msg: *mut SetStratifiedCurrentDirection_Response) -> bool;
    fn dave_interfaces__srv__SetStratifiedCurrentDirection_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentDirection_Response>, size: usize) -> bool;
    fn dave_interfaces__srv__SetStratifiedCurrentDirection_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentDirection_Response>);
    fn dave_interfaces__srv__SetStratifiedCurrentDirection_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStratifiedCurrentDirection_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStratifiedCurrentDirection_Response>) -> bool;
}

// Corresponds to dave_interfaces__srv__SetStratifiedCurrentDirection_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStratifiedCurrentDirection_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetStratifiedCurrentDirection_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__srv__SetStratifiedCurrentDirection_Response__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__srv__SetStratifiedCurrentDirection_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStratifiedCurrentDirection_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentDirection_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentDirection_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__srv__SetStratifiedCurrentDirection_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStratifiedCurrentDirection_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStratifiedCurrentDirection_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/srv/SetStratifiedCurrentDirection_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__srv__SetStratifiedCurrentDirection_Response() }
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


