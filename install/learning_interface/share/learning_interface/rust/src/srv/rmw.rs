#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__srv__AddTwoInts_Request() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__srv__AddTwoInts_Request__init(msg: *mut AddTwoInts_Request) -> bool;
    fn learning_interface__srv__AddTwoInts_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddTwoInts_Request>, size: usize) -> bool;
    fn learning_interface__srv__AddTwoInts_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddTwoInts_Request>);
    fn learning_interface__srv__AddTwoInts_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddTwoInts_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AddTwoInts_Request>) -> bool;
}

// Corresponds to learning_interface__srv__AddTwoInts_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddTwoInts_Request {
    /// 第一个加数
    pub a: i64,

    /// 第二个加数
    pub b: i64,

}



impl Default for AddTwoInts_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__srv__AddTwoInts_Request__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__srv__AddTwoInts_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddTwoInts_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__AddTwoInts_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__AddTwoInts_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__AddTwoInts_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddTwoInts_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddTwoInts_Request where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/srv/AddTwoInts_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__srv__AddTwoInts_Request() }
  }
}


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__srv__AddTwoInts_Response() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__srv__AddTwoInts_Response__init(msg: *mut AddTwoInts_Response) -> bool;
    fn learning_interface__srv__AddTwoInts_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddTwoInts_Response>, size: usize) -> bool;
    fn learning_interface__srv__AddTwoInts_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddTwoInts_Response>);
    fn learning_interface__srv__AddTwoInts_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddTwoInts_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AddTwoInts_Response>) -> bool;
}

// Corresponds to learning_interface__srv__AddTwoInts_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddTwoInts_Response {
    /// 求和结果
    pub sum: i64,

}



impl Default for AddTwoInts_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__srv__AddTwoInts_Response__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__srv__AddTwoInts_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddTwoInts_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__AddTwoInts_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__AddTwoInts_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__AddTwoInts_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddTwoInts_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddTwoInts_Response where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/srv/AddTwoInts_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__srv__AddTwoInts_Response() }
  }
}


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__srv__GetObjectPosition_Request() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__srv__GetObjectPosition_Request__init(msg: *mut GetObjectPosition_Request) -> bool;
    fn learning_interface__srv__GetObjectPosition_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetObjectPosition_Request>, size: usize) -> bool;
    fn learning_interface__srv__GetObjectPosition_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetObjectPosition_Request>);
    fn learning_interface__srv__GetObjectPosition_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetObjectPosition_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetObjectPosition_Request>) -> bool;
}

// Corresponds to learning_interface__srv__GetObjectPosition_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetObjectPosition_Request {
    /// 获取目标位置的指令
    pub get: bool,

}



impl Default for GetObjectPosition_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__srv__GetObjectPosition_Request__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__srv__GetObjectPosition_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetObjectPosition_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__GetObjectPosition_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__GetObjectPosition_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__GetObjectPosition_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetObjectPosition_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetObjectPosition_Request where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/srv/GetObjectPosition_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__srv__GetObjectPosition_Request() }
  }
}


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__srv__GetObjectPosition_Response() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__srv__GetObjectPosition_Response__init(msg: *mut GetObjectPosition_Response) -> bool;
    fn learning_interface__srv__GetObjectPosition_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetObjectPosition_Response>, size: usize) -> bool;
    fn learning_interface__srv__GetObjectPosition_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetObjectPosition_Response>);
    fn learning_interface__srv__GetObjectPosition_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetObjectPosition_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetObjectPosition_Response>) -> bool;
}

// Corresponds to learning_interface__srv__GetObjectPosition_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetObjectPosition_Response {
    /// 目标的X坐标
    pub x: i32,

    /// 目标的Y坐标
    pub y: i32,

}



impl Default for GetObjectPosition_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__srv__GetObjectPosition_Response__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__srv__GetObjectPosition_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetObjectPosition_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__GetObjectPosition_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__GetObjectPosition_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__srv__GetObjectPosition_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetObjectPosition_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetObjectPosition_Response where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/srv/GetObjectPosition_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__srv__GetObjectPosition_Response() }
  }
}






#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__learning_interface__srv__AddTwoInts() -> *const std::ffi::c_void;
}

// Corresponds to learning_interface__srv__AddTwoInts
#[allow(missing_docs, non_camel_case_types)]
pub struct AddTwoInts;

impl rosidl_runtime_rs::Service for AddTwoInts {
    type Request = AddTwoInts_Request;
    type Response = AddTwoInts_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__learning_interface__srv__AddTwoInts() }
    }
}




#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__learning_interface__srv__GetObjectPosition() -> *const std::ffi::c_void;
}

// Corresponds to learning_interface__srv__GetObjectPosition
#[allow(missing_docs, non_camel_case_types)]
pub struct GetObjectPosition;

impl rosidl_runtime_rs::Service for GetObjectPosition {
    type Request = GetObjectPosition_Request;
    type Response = GetObjectPosition_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__learning_interface__srv__GetObjectPosition() }
    }
}


