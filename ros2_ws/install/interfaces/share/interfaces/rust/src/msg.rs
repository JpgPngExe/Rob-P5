#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to interfaces__msg__MultiArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub rows: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cols: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<f32>,

}



impl Default for MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for MultiArray {
  type RmwMsg = super::msg::rmw::MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        rows: msg.rows,
        cols: msg.cols,
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      rows: msg.rows,
      cols: msg.cols,
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      rows: msg.rows,
      cols: msg.cols,
      data: msg.data.into(),
    }
  }
}


