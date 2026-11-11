#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__ImpedanceCmd() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__ImpedanceCmd__init(msg: *mut ImpedanceCmd) -> bool;
    fn candle_ros2__msg__ImpedanceCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ImpedanceCmd>, size: usize) -> bool;
    fn candle_ros2__msg__ImpedanceCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ImpedanceCmd>);
    fn candle_ros2__msg__ImpedanceCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ImpedanceCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<ImpedanceCmd>) -> bool;
}

// Corresponds to candle_ros2__msg__ImpedanceCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message holds impedance PD controller parameters for MD controllers

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ImpedanceCmd {
    /// Device IDs
    pub device_ids: rosidl_runtime_rs::Sequence<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_output: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for ImpedanceCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__ImpedanceCmd__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__ImpedanceCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ImpedanceCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__ImpedanceCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__ImpedanceCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__ImpedanceCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ImpedanceCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ImpedanceCmd where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/ImpedanceCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__ImpedanceCmd() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__MotionCmd() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__MotionCmd__init(msg: *mut MotionCmd) -> bool;
    fn candle_ros2__msg__MotionCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotionCmd>, size: usize) -> bool;
    fn candle_ros2__msg__MotionCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotionCmd>);
    fn candle_ros2__msg__MotionCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotionCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<MotionCmd>) -> bool;
}

// Corresponds to candle_ros2__msg__MotionCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message holds motion targets for MD devices

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionCmd {
    /// Device IDs
    pub device_ids: rosidl_runtime_rs::Sequence<u32>,

    /// Target positions
    pub target_position: rosidl_runtime_rs::Sequence<f32>,

    /// Target velocities
    pub target_velocity: rosidl_runtime_rs::Sequence<f32>,

    /// Target torques
    pub target_torque: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for MotionCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__MotionCmd__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__MotionCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotionCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__MotionCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__MotionCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__MotionCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotionCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotionCmd where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/MotionCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__MotionCmd() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__Pid() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__Pid__init(msg: *mut Pid) -> bool;
    fn candle_ros2__msg__Pid__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pid>, size: usize) -> bool;
    fn candle_ros2__msg__Pid__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pid>);
    fn candle_ros2__msg__Pid__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pid>, out_seq: *mut rosidl_runtime_rs::Sequence<Pid>) -> bool;
}

// Corresponds to candle_ros2__msg__Pid
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message holds PID controller parameters

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pid {

    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ki: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub i_windup: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_output: f32,

}



impl Default for Pid {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__Pid__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__Pid__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pid {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__Pid__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__Pid__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__Pid__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pid {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pid where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/Pid";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__Pid() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__VelocityPidCmd() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__VelocityPidCmd__init(msg: *mut VelocityPidCmd) -> bool;
    fn candle_ros2__msg__VelocityPidCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VelocityPidCmd>, size: usize) -> bool;
    fn candle_ros2__msg__VelocityPidCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VelocityPidCmd>);
    fn candle_ros2__msg__VelocityPidCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VelocityPidCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<VelocityPidCmd>) -> bool;
}

// Corresponds to candle_ros2__msg__VelocityPidCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message holds PID controller parameters for Velocity PID motion mode for MD controllers

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VelocityPidCmd {
    /// Device IDs
    pub device_ids: rosidl_runtime_rs::Sequence<u16>,

    /// Velocity PID parameters
    pub velocity_pid: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Pid>,

}



impl Default for VelocityPidCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__VelocityPidCmd__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__VelocityPidCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VelocityPidCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__VelocityPidCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__VelocityPidCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__VelocityPidCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VelocityPidCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VelocityPidCmd where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/VelocityPidCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__VelocityPidCmd() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__PositionPidCmd() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__PositionPidCmd__init(msg: *mut PositionPidCmd) -> bool;
    fn candle_ros2__msg__PositionPidCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PositionPidCmd>, size: usize) -> bool;
    fn candle_ros2__msg__PositionPidCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PositionPidCmd>);
    fn candle_ros2__msg__PositionPidCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PositionPidCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<PositionPidCmd>) -> bool;
}

// Corresponds to candle_ros2__msg__PositionPidCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message holds PID controller parameters for Position PID motion mode for MD controllers

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionPidCmd {
    /// Device IDs
    pub device_ids: rosidl_runtime_rs::Sequence<u16>,

    /// Position PID parameters
    pub position_pid: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Pid>,

    /// Velocity PID parameters
    pub velocity_pid: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Pid>,

}



impl Default for PositionPidCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__PositionPidCmd__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__PositionPidCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PositionPidCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__PositionPidCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__PositionPidCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__PositionPidCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PositionPidCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PositionPidCmd where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/PositionPidCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__PositionPidCmd() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__BrakeResistorData() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__BrakeResistorData__init(msg: *mut BrakeResistorData) -> bool;
    fn candle_ros2__msg__BrakeResistorData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BrakeResistorData>, size: usize) -> bool;
    fn candle_ros2__msg__BrakeResistorData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BrakeResistorData>);
    fn candle_ros2__msg__BrakeResistorData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BrakeResistorData>, out_seq: *mut rosidl_runtime_rs::Sequence<BrakeResistorData>) -> bool;
}

// Corresponds to candle_ros2__msg__BrakeResistorData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrakeResistorData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_limit: f32,

}



impl Default for BrakeResistorData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__BrakeResistorData__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__BrakeResistorData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BrakeResistorData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__BrakeResistorData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__BrakeResistorData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__BrakeResistorData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BrakeResistorData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BrakeResistorData where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/BrakeResistorData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__BrakeResistorData() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__ControlModuleData() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__ControlModuleData__init(msg: *mut ControlModuleData) -> bool;
    fn candle_ros2__msg__ControlModuleData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlModuleData>, size: usize) -> bool;
    fn candle_ros2__msg__ControlModuleData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlModuleData>);
    fn candle_ros2__msg__ControlModuleData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlModuleData>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlModuleData>) -> bool;
}

// Corresponds to candle_ros2__msg__ControlModuleData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlModuleData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bus_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage_level_1: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage_level_2: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_trigger_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_limit: f32,

}



impl Default for ControlModuleData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__ControlModuleData__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__ControlModuleData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlModuleData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__ControlModuleData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__ControlModuleData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__ControlModuleData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlModuleData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlModuleData where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/ControlModuleData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__ControlModuleData() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__IsolatedConverterData() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__IsolatedConverterData__init(msg: *mut IsolatedConverterData) -> bool;
    fn candle_ros2__msg__IsolatedConverterData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsolatedConverterData>, size: usize) -> bool;
    fn candle_ros2__msg__IsolatedConverterData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsolatedConverterData>);
    fn candle_ros2__msg__IsolatedConverterData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsolatedConverterData>, out_seq: *mut rosidl_runtime_rs::Sequence<IsolatedConverterData>) -> bool;
}

// Corresponds to candle_ros2__msg__IsolatedConverterData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsolatedConverterData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub load_current: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub energy: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ocd_level: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ocd_delay: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_limit: f32,

}



impl Default for IsolatedConverterData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__IsolatedConverterData__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__IsolatedConverterData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsolatedConverterData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__IsolatedConverterData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__IsolatedConverterData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__IsolatedConverterData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsolatedConverterData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsolatedConverterData where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/IsolatedConverterData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__IsolatedConverterData() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__PowerStageData() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__PowerStageData__init(msg: *mut PowerStageData) -> bool;
    fn candle_ros2__msg__PowerStageData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PowerStageData>, size: usize) -> bool;
    fn candle_ros2__msg__PowerStageData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PowerStageData>);
    fn candle_ros2__msg__PowerStageData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PowerStageData>, out_seq: *mut rosidl_runtime_rs::Sequence<PowerStageData>) -> bool;
}

// Corresponds to candle_ros2__msg__PowerStageData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerStageData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_resistor_socket: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trigger_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub autostart: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub load_current: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub energy: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ocd_level: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ocd_delay: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_limit: f32,

}



impl Default for PowerStageData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__PowerStageData__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__PowerStageData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PowerStageData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__PowerStageData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__PowerStageData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__PowerStageData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PowerStageData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PowerStageData where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/PowerStageData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__PowerStageData() }
  }
}


