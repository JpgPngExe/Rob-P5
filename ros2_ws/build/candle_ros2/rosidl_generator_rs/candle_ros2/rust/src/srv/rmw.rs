#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__AddDevices_Request() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__AddDevices_Request__init(msg: *mut AddDevices_Request) -> bool;
    fn candle_ros2__srv__AddDevices_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddDevices_Request>, size: usize) -> bool;
    fn candle_ros2__srv__AddDevices_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddDevices_Request>);
    fn candle_ros2__srv__AddDevices_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddDevices_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AddDevices_Request>) -> bool;
}

// Corresponds to candle_ros2__srv__AddDevices_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddDevices_Request {
    /// Device IDs
    pub device_ids: rosidl_runtime_rs::Sequence<u16>,

}



impl Default for AddDevices_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__AddDevices_Request__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__AddDevices_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddDevices_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddDevices_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddDevices_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddDevices_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddDevices_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddDevices_Request where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/AddDevices_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__AddDevices_Request() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__AddDevices_Response() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__AddDevices_Response__init(msg: *mut AddDevices_Response) -> bool;
    fn candle_ros2__srv__AddDevices_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddDevices_Response>, size: usize) -> bool;
    fn candle_ros2__srv__AddDevices_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddDevices_Response>);
    fn candle_ros2__srv__AddDevices_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddDevices_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AddDevices_Response>) -> bool;
}

// Corresponds to candle_ros2__srv__AddDevices_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddDevices_Response {
    /// Success status for each device
    pub success: rosidl_runtime_rs::Sequence<bool>,

    /// Total number of devices
    pub total_devices: u16,

}



impl Default for AddDevices_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__AddDevices_Response__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__AddDevices_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddDevices_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddDevices_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddDevices_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddDevices_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddDevices_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddDevices_Response where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/AddDevices_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__AddDevices_Response() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__Generic_Request() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__Generic_Request__init(msg: *mut Generic_Request) -> bool;
    fn candle_ros2__srv__Generic_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Generic_Request>, size: usize) -> bool;
    fn candle_ros2__srv__Generic_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Generic_Request>);
    fn candle_ros2__srv__Generic_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Generic_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Generic_Request>) -> bool;
}

// Corresponds to candle_ros2__srv__Generic_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Generic_Request {
    /// Device IDs
    pub device_ids: rosidl_runtime_rs::Sequence<u16>,

}



impl Default for Generic_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__Generic_Request__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__Generic_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Generic_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__Generic_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__Generic_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__Generic_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Generic_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Generic_Request where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/Generic_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__Generic_Request() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__Generic_Response() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__Generic_Response__init(msg: *mut Generic_Response) -> bool;
    fn candle_ros2__srv__Generic_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Generic_Response>, size: usize) -> bool;
    fn candle_ros2__srv__Generic_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Generic_Response>);
    fn candle_ros2__srv__Generic_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Generic_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Generic_Response>) -> bool;
}

// Corresponds to candle_ros2__srv__Generic_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Generic_Response {
    /// Success status for each device
    pub success: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for Generic_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__Generic_Response__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__Generic_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Generic_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__Generic_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__Generic_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__Generic_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Generic_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Generic_Response where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/Generic_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__Generic_Response() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__GenericPds_Request() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__GenericPds_Request__init(msg: *mut GenericPds_Request) -> bool;
    fn candle_ros2__srv__GenericPds_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GenericPds_Request>, size: usize) -> bool;
    fn candle_ros2__srv__GenericPds_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GenericPds_Request>);
    fn candle_ros2__srv__GenericPds_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GenericPds_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GenericPds_Request>) -> bool;
}

// Corresponds to candle_ros2__srv__GenericPds_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericPds_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GenericPds_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__GenericPds_Request__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__GenericPds_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GenericPds_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericPds_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericPds_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericPds_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GenericPds_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GenericPds_Request where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/GenericPds_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__GenericPds_Request() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__GenericPds_Response() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__GenericPds_Response__init(msg: *mut GenericPds_Response) -> bool;
    fn candle_ros2__srv__GenericPds_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GenericPds_Response>, size: usize) -> bool;
    fn candle_ros2__srv__GenericPds_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GenericPds_Response>);
    fn candle_ros2__srv__GenericPds_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GenericPds_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GenericPds_Response>) -> bool;
}

// Corresponds to candle_ros2__srv__GenericPds_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericPds_Response {
    /// Success status for each device
    pub success: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for GenericPds_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__GenericPds_Response__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__GenericPds_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GenericPds_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericPds_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericPds_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericPds_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GenericPds_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GenericPds_Response where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/GenericPds_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__GenericPds_Response() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetLimits_Request() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__SetLimits_Request__init(msg: *mut SetLimits_Request) -> bool;
    fn candle_ros2__srv__SetLimits_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetLimits_Request>, size: usize) -> bool;
    fn candle_ros2__srv__SetLimits_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetLimits_Request>);
    fn candle_ros2__srv__SetLimits_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetLimits_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetLimits_Request>) -> bool;
}

// Corresponds to candle_ros2__srv__SetLimits_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLimits_Request {
    /// Device IDs
    pub device_ids: rosidl_runtime_rs::Sequence<u16>,

    /// Velocity limit for each device
    pub velocity_limit: rosidl_runtime_rs::Sequence<f32>,

    /// Torque limit for each device
    pub torque_limit: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for SetLimits_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__SetLimits_Request__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__SetLimits_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetLimits_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimits_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimits_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimits_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetLimits_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetLimits_Request where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/SetLimits_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetLimits_Request() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetLimits_Response() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__SetLimits_Response__init(msg: *mut SetLimits_Response) -> bool;
    fn candle_ros2__srv__SetLimits_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetLimits_Response>, size: usize) -> bool;
    fn candle_ros2__srv__SetLimits_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetLimits_Response>);
    fn candle_ros2__srv__SetLimits_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetLimits_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetLimits_Response>) -> bool;
}

// Corresponds to candle_ros2__srv__SetLimits_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLimits_Response {
    /// Success status for each device
    pub success: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for SetLimits_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__SetLimits_Response__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__SetLimits_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetLimits_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimits_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimits_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimits_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetLimits_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetLimits_Response where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/SetLimits_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetLimits_Response() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__SetMode_Request__init(msg: *mut SetMode_Request) -> bool;
    fn candle_ros2__srv__SetMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMode_Request>, size: usize) -> bool;
    fn candle_ros2__srv__SetMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMode_Request>);
    fn candle_ros2__srv__SetMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMode_Request>) -> bool;
}

// Corresponds to candle_ros2__srv__SetMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMode_Request {
    /// Device IDs
    pub device_ids: rosidl_runtime_rs::Sequence<u16>,

    /// Mode for each device: "IMPEDANCE", "POSITION_PID", "VELOCITY_PID", "RAW_TORQUE"
    pub mode: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for SetMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__SetMode_Request__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__SetMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/SetMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetMode_Request() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__SetMode_Response__init(msg: *mut SetMode_Response) -> bool;
    fn candle_ros2__srv__SetMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMode_Response>, size: usize) -> bool;
    fn candle_ros2__srv__SetMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMode_Response>);
    fn candle_ros2__srv__SetMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMode_Response>) -> bool;
}

// Corresponds to candle_ros2__srv__SetMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMode_Response {
    /// Success status for each device
    pub success: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for SetMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__SetMode_Response__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__SetMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/SetMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetMode_Response() }
  }
}






#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__AddDevices() -> *const std::ffi::c_void;
}

// Corresponds to candle_ros2__srv__AddDevices
#[allow(missing_docs, non_camel_case_types)]
pub struct AddDevices;

impl rosidl_runtime_rs::Service for AddDevices {
    type Request = AddDevices_Request;
    type Response = AddDevices_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__AddDevices() }
    }
}




#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__Generic() -> *const std::ffi::c_void;
}

// Corresponds to candle_ros2__srv__Generic
#[allow(missing_docs, non_camel_case_types)]
pub struct Generic;

impl rosidl_runtime_rs::Service for Generic {
    type Request = Generic_Request;
    type Response = Generic_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__Generic() }
    }
}




#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__GenericPds() -> *const std::ffi::c_void;
}

// Corresponds to candle_ros2__srv__GenericPds
#[allow(missing_docs, non_camel_case_types)]
pub struct GenericPds;

impl rosidl_runtime_rs::Service for GenericPds {
    type Request = GenericPds_Request;
    type Response = GenericPds_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__GenericPds() }
    }
}




#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__SetLimits() -> *const std::ffi::c_void;
}

// Corresponds to candle_ros2__srv__SetLimits
#[allow(missing_docs, non_camel_case_types)]
pub struct SetLimits;

impl rosidl_runtime_rs::Service for SetLimits {
    type Request = SetLimits_Request;
    type Response = SetLimits_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__SetLimits() }
    }
}




#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__SetMode() -> *const std::ffi::c_void;
}

// Corresponds to candle_ros2__srv__SetMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMode;

impl rosidl_runtime_rs::Service for SetMode {
    type Request = SetMode_Request;
    type Response = SetMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__SetMode() }
    }
}


