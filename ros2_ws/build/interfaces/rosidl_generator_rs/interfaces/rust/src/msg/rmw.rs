#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__msg__MultiArray__init(msg: *mut MultiArray) -> bool;
    fn interfaces__msg__MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MultiArray>, size: usize) -> bool;
    fn interfaces__msg__MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MultiArray>);
    fn interfaces__msg__MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<MultiArray>) -> bool;
}

// Corresponds to interfaces__msg__MultiArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub rows: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cols: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__msg__MultiArray__init(&mut msg as *mut _) {
        panic!("Call to interfaces__msg__MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/msg/MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__MultiArray() }
  }
}


