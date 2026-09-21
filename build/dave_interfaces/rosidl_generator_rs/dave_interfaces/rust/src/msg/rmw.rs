#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__UsblCommand() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__msg__UsblCommand__init(msg: *mut UsblCommand) -> bool;
    fn dave_interfaces__msg__UsblCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UsblCommand>, size: usize) -> bool;
    fn dave_interfaces__msg__UsblCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UsblCommand>);
    fn dave_interfaces__msg__UsblCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UsblCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<UsblCommand>) -> bool;
}

// Corresponds to dave_interfaces__msg__UsblCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub data: rosidl_runtime_rs::String,

}



impl Default for UsblCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__msg__UsblCommand__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__msg__UsblCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UsblCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__UsblCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__UsblCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__UsblCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UsblCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UsblCommand where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/msg/UsblCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__UsblCommand() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__UsblResponse() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__msg__UsblResponse__init(msg: *mut UsblResponse) -> bool;
    fn dave_interfaces__msg__UsblResponse__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UsblResponse>, size: usize) -> bool;
    fn dave_interfaces__msg__UsblResponse__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UsblResponse>);
    fn dave_interfaces__msg__UsblResponse__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UsblResponse>, out_seq: *mut rosidl_runtime_rs::Sequence<UsblResponse>) -> bool;
}

// Corresponds to dave_interfaces__msg__UsblResponse
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub data: rosidl_runtime_rs::String,

}



impl Default for UsblResponse {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__msg__UsblResponse__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__msg__UsblResponse__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UsblResponse {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__UsblResponse__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__UsblResponse__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__UsblResponse__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UsblResponse {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UsblResponse where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/msg/UsblResponse";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__UsblResponse() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__Location() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__msg__Location__init(msg: *mut Location) -> bool;
    fn dave_interfaces__msg__Location__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Location>, size: usize) -> bool;
    fn dave_interfaces__msg__Location__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Location>);
    fn dave_interfaces__msg__Location__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Location>, out_seq: *mut rosidl_runtime_rs::Sequence<Location>) -> bool;
}

// Corresponds to dave_interfaces__msg__Location
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__msg__Location__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__msg__Location__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Location {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__Location__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__Location__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__Location__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Location {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Location where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/msg/Location";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__Location() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__DVL() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__msg__DVL__init(msg: *mut DVL) -> bool;
    fn dave_interfaces__msg__DVL__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DVL>, size: usize) -> bool;
    fn dave_interfaces__msg__DVL__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DVL>);
    fn dave_interfaces__msg__DVL__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DVL>, out_seq: *mut rosidl_runtime_rs::Sequence<DVL>) -> bool;
}

// Corresponds to dave_interfaces__msg__DVL
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DVL {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target: super::super::msg::rmw::DVLTarget,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::rmw::TwistWithCovariance,


    // This member is not documented.
    #[allow(missing_docs)]
    pub beams: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DVLBeam>,

}



impl Default for DVL {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__msg__DVL__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__msg__DVL__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DVL {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__DVL__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__DVL__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__DVL__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DVL {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DVL where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/msg/DVL";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__DVL() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__DVLBeam() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__msg__DVLBeam__init(msg: *mut DVLBeam) -> bool;
    fn dave_interfaces__msg__DVLBeam__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DVLBeam>, size: usize) -> bool;
    fn dave_interfaces__msg__DVLBeam__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DVLBeam>);
    fn dave_interfaces__msg__DVLBeam__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DVLBeam>, out_seq: *mut rosidl_runtime_rs::Sequence<DVLBeam>) -> bool;
}

// Corresponds to dave_interfaces__msg__DVLBeam
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DVLBeam {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reference: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub range: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub locked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::rmw::TwistWithCovariance,

}



impl Default for DVLBeam {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__msg__DVLBeam__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__msg__DVLBeam__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DVLBeam {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__DVLBeam__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__DVLBeam__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__DVLBeam__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DVLBeam {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DVLBeam where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/msg/DVLBeam";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__DVLBeam() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__DVLTarget() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__msg__DVLTarget__init(msg: *mut DVLTarget) -> bool;
    fn dave_interfaces__msg__DVLTarget__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DVLTarget>, size: usize) -> bool;
    fn dave_interfaces__msg__DVLTarget__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DVLTarget>);
    fn dave_interfaces__msg__DVLTarget__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DVLTarget>, out_seq: *mut rosidl_runtime_rs::Sequence<DVLTarget>) -> bool;
}

// Corresponds to dave_interfaces__msg__DVLTarget
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DVLTarget {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub range: f64,

}



impl Default for DVLTarget {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__msg__DVLTarget__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__msg__DVLTarget__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DVLTarget {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__DVLTarget__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__DVLTarget__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__DVLTarget__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DVLTarget {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DVLTarget where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/msg/DVLTarget";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__DVLTarget() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__StratifiedCurrentVelocity() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__msg__StratifiedCurrentVelocity__init(msg: *mut StratifiedCurrentVelocity) -> bool;
    fn dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StratifiedCurrentVelocity>, size: usize) -> bool;
    fn dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StratifiedCurrentVelocity>);
    fn dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StratifiedCurrentVelocity>, out_seq: *mut rosidl_runtime_rs::Sequence<StratifiedCurrentVelocity>) -> bool;
}

// Corresponds to dave_interfaces__msg__StratifiedCurrentVelocity
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Publishes depths and velocities based on the database contents

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StratifiedCurrentVelocity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Depths
    pub depths: rosidl_runtime_rs::Sequence<f32>,

    /// Velocities
    pub velocities: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Vector3>,

}



impl Default for StratifiedCurrentVelocity {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__msg__StratifiedCurrentVelocity__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__msg__StratifiedCurrentVelocity__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StratifiedCurrentVelocity {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StratifiedCurrentVelocity {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StratifiedCurrentVelocity where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/msg/StratifiedCurrentVelocity";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__StratifiedCurrentVelocity() }
  }
}


#[link(name = "dave_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__StratifiedCurrentDatabase() -> *const std::ffi::c_void;
}

#[link(name = "dave_interfaces__rosidl_generator_c")]
extern "C" {
    fn dave_interfaces__msg__StratifiedCurrentDatabase__init(msg: *mut StratifiedCurrentDatabase) -> bool;
    fn dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StratifiedCurrentDatabase>, size: usize) -> bool;
    fn dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StratifiedCurrentDatabase>);
    fn dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StratifiedCurrentDatabase>, out_seq: *mut rosidl_runtime_rs::Sequence<StratifiedCurrentDatabase>) -> bool;
}

// Corresponds to dave_interfaces__msg__StratifiedCurrentDatabase
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Publishes depths and velocities read from the csv database

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StratifiedCurrentDatabase {
    /// Depths
    pub depths: rosidl_runtime_rs::Sequence<f32>,

    /// Velocities
    pub velocities: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Vector3>,

    /// Tide time (GMT)
    pub time_gmt_year: rosidl_runtime_rs::Sequence<i16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_gmt_month: rosidl_runtime_rs::Sequence<i16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_gmt_day: rosidl_runtime_rs::Sequence<i16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_gmt_hour: rosidl_runtime_rs::Sequence<i16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_gmt_minute: rosidl_runtime_rs::Sequence<i16>,

    /// Tide velocities
    pub tidevelocities: rosidl_runtime_rs::Sequence<f32>,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dave_interfaces__msg__StratifiedCurrentDatabase__init(&mut msg as *mut _) {
        panic!("Call to dave_interfaces__msg__StratifiedCurrentDatabase__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StratifiedCurrentDatabase {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StratifiedCurrentDatabase {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StratifiedCurrentDatabase where Self: Sized {
  const TYPE_NAME: &'static str = "dave_interfaces/msg/StratifiedCurrentDatabase";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dave_interfaces__msg__StratifiedCurrentDatabase() }
  }
}


