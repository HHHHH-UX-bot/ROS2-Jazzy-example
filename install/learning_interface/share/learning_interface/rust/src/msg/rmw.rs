#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__msg__ObjectPosition() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__msg__ObjectPosition__init(msg: *mut ObjectPosition) -> bool;
    fn learning_interface__msg__ObjectPosition__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObjectPosition>, size: usize) -> bool;
    fn learning_interface__msg__ObjectPosition__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObjectPosition>);
    fn learning_interface__msg__ObjectPosition__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObjectPosition>, out_seq: *mut rosidl_runtime_rs::Sequence<ObjectPosition>) -> bool;
}

// Corresponds to learning_interface__msg__ObjectPosition
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObjectPosition {
    /// 表示目标的X坐标
    pub x: i32,

    /// 表示目标的Y坐标
    pub y: i32,

}



impl Default for ObjectPosition {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__msg__ObjectPosition__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__msg__ObjectPosition__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObjectPosition {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__msg__ObjectPosition__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__msg__ObjectPosition__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__msg__ObjectPosition__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObjectPosition {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObjectPosition where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/msg/ObjectPosition";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__msg__ObjectPosition() }
  }
}


