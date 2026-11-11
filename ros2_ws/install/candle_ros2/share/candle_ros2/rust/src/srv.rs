#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to candle_ros2__srv__AddDevices_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddDevices_Request {
    /// Device IDs
    pub device_ids: Vec<u16>,

}



impl Default for AddDevices_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AddDevices_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AddDevices_Request {
  type RmwMsg = super::srv::rmw::AddDevices_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_ids: msg.device_ids.into(),
    }
  }
}


// Corresponds to candle_ros2__srv__AddDevices_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddDevices_Response {
    /// Success status for each device
    pub success: Vec<bool>,

    /// Total number of devices
    pub total_devices: u16,

}



impl Default for AddDevices_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AddDevices_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AddDevices_Response {
  type RmwMsg = super::srv::rmw::AddDevices_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success.as_slice().into(),
        total_devices: msg.total_devices,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success.as_slice().into(),
      total_devices: msg.total_devices,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success.into(),
      total_devices: msg.total_devices,
    }
  }
}


// Corresponds to candle_ros2__srv__Generic_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Generic_Request {
    /// Device IDs
    pub device_ids: Vec<u16>,

}



impl Default for Generic_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Generic_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Generic_Request {
  type RmwMsg = super::srv::rmw::Generic_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_ids: msg.device_ids.into(),
    }
  }
}


// Corresponds to candle_ros2__srv__Generic_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Generic_Response {
    /// Success status for each device
    pub success: Vec<bool>,

}



impl Default for Generic_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Generic_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Generic_Response {
  type RmwMsg = super::srv::rmw::Generic_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success.into(),
    }
  }
}


// Corresponds to candle_ros2__srv__GenericPds_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericPds_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GenericPds_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GenericPds_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GenericPds_Request {
  type RmwMsg = super::srv::rmw::GenericPds_Request;

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


// Corresponds to candle_ros2__srv__GenericPds_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericPds_Response {
    /// Success status for each device
    pub success: Vec<bool>,

}



impl Default for GenericPds_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GenericPds_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GenericPds_Response {
  type RmwMsg = super::srv::rmw::GenericPds_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success.into(),
    }
  }
}


// Corresponds to candle_ros2__srv__SetLimits_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLimits_Request {
    /// Device IDs
    pub device_ids: Vec<u16>,

    /// Velocity limit for each device
    pub velocity_limit: Vec<f32>,

    /// Torque limit for each device
    pub torque_limit: Vec<f32>,

}



impl Default for SetLimits_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetLimits_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetLimits_Request {
  type RmwMsg = super::srv::rmw::SetLimits_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        velocity_limit: msg.velocity_limit.as_slice().into(),
        torque_limit: msg.torque_limit.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        velocity_limit: msg.velocity_limit.as_slice().into(),
        torque_limit: msg.torque_limit.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_ids: msg.device_ids.into(),
      velocity_limit: msg.velocity_limit.into(),
      torque_limit: msg.torque_limit.into(),
    }
  }
}


// Corresponds to candle_ros2__srv__SetLimits_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLimits_Response {
    /// Success status for each device
    pub success: Vec<bool>,

}



impl Default for SetLimits_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetLimits_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetLimits_Response {
  type RmwMsg = super::srv::rmw::SetLimits_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success.into(),
    }
  }
}


// Corresponds to candle_ros2__srv__SetMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMode_Request {
    /// Device IDs
    pub device_ids: Vec<u16>,

    /// Mode for each device: "IMPEDANCE", "POSITION_PID", "VELOCITY_PID", "RAW_TORQUE"
    pub mode: Vec<std::string::String>,

}



impl Default for SetMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMode_Request {
  type RmwMsg = super::srv::rmw::SetMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        mode: msg.mode
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        mode: msg.mode
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_ids: msg.device_ids.into(),
      mode: msg.mode
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__srv__SetMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMode_Response {
    /// Success status for each device
    pub success: Vec<bool>,

}



impl Default for SetMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMode_Response {
  type RmwMsg = super::srv::rmw::SetMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success.into(),
    }
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


