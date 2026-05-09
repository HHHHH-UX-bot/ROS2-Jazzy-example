
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_Goal() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__action__MoveCircle_Goal__init(msg: *mut MoveCircle_Goal) -> bool;
    fn learning_interface__action__MoveCircle_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_Goal>, size: usize) -> bool;
    fn learning_interface__action__MoveCircle_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_Goal>);
    fn learning_interface__action__MoveCircle_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveCircle_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_Goal>) -> bool;
}

// Corresponds to learning_interface__action__MoveCircle_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveCircle_Goal {
    /// 定义动作的目标，表示动作开始的指令
    pub enable: bool,

}



impl Default for MoveCircle_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__action__MoveCircle_Goal__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__action__MoveCircle_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveCircle_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveCircle_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveCircle_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/action/MoveCircle_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_Goal() }
  }
}


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_Result() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__action__MoveCircle_Result__init(msg: *mut MoveCircle_Result) -> bool;
    fn learning_interface__action__MoveCircle_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_Result>, size: usize) -> bool;
    fn learning_interface__action__MoveCircle_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_Result>);
    fn learning_interface__action__MoveCircle_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveCircle_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_Result>) -> bool;
}

// Corresponds to learning_interface__action__MoveCircle_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveCircle_Result {
    /// 定义动作的结果，表示是否成功执行
    pub finish: bool,

}



impl Default for MoveCircle_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__action__MoveCircle_Result__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__action__MoveCircle_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveCircle_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveCircle_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveCircle_Result where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/action/MoveCircle_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_Result() }
  }
}


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__action__MoveCircle_Feedback__init(msg: *mut MoveCircle_Feedback) -> bool;
    fn learning_interface__action__MoveCircle_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_Feedback>, size: usize) -> bool;
    fn learning_interface__action__MoveCircle_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_Feedback>);
    fn learning_interface__action__MoveCircle_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveCircle_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_Feedback>) -> bool;
}

// Corresponds to learning_interface__action__MoveCircle_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveCircle_Feedback {
    /// 定义动作的反馈，表示当前执行到的位置
    pub state: i32,

}



impl Default for MoveCircle_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__action__MoveCircle_Feedback__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__action__MoveCircle_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveCircle_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveCircle_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveCircle_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/action/MoveCircle_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_Feedback() }
  }
}


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__action__MoveCircle_FeedbackMessage__init(msg: *mut MoveCircle_FeedbackMessage) -> bool;
    fn learning_interface__action__MoveCircle_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_FeedbackMessage>, size: usize) -> bool;
    fn learning_interface__action__MoveCircle_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_FeedbackMessage>);
    fn learning_interface__action__MoveCircle_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveCircle_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_FeedbackMessage>) -> bool;
}

// Corresponds to learning_interface__action__MoveCircle_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveCircle_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::MoveCircle_Feedback,

}



impl Default for MoveCircle_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__action__MoveCircle_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__action__MoveCircle_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveCircle_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveCircle_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveCircle_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/action/MoveCircle_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_FeedbackMessage() }
  }
}




#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__action__MoveCircle_SendGoal_Request__init(msg: *mut MoveCircle_SendGoal_Request) -> bool;
    fn learning_interface__action__MoveCircle_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_SendGoal_Request>, size: usize) -> bool;
    fn learning_interface__action__MoveCircle_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_SendGoal_Request>);
    fn learning_interface__action__MoveCircle_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveCircle_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_SendGoal_Request>) -> bool;
}

// Corresponds to learning_interface__action__MoveCircle_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveCircle_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::MoveCircle_Goal,

}



impl Default for MoveCircle_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__action__MoveCircle_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__action__MoveCircle_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveCircle_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveCircle_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveCircle_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/action/MoveCircle_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_SendGoal_Request() }
  }
}


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__action__MoveCircle_SendGoal_Response__init(msg: *mut MoveCircle_SendGoal_Response) -> bool;
    fn learning_interface__action__MoveCircle_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_SendGoal_Response>, size: usize) -> bool;
    fn learning_interface__action__MoveCircle_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_SendGoal_Response>);
    fn learning_interface__action__MoveCircle_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveCircle_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_SendGoal_Response>) -> bool;
}

// Corresponds to learning_interface__action__MoveCircle_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveCircle_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MoveCircle_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__action__MoveCircle_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__action__MoveCircle_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveCircle_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveCircle_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveCircle_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/action/MoveCircle_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_SendGoal_Response() }
  }
}


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__action__MoveCircle_GetResult_Request__init(msg: *mut MoveCircle_GetResult_Request) -> bool;
    fn learning_interface__action__MoveCircle_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_GetResult_Request>, size: usize) -> bool;
    fn learning_interface__action__MoveCircle_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_GetResult_Request>);
    fn learning_interface__action__MoveCircle_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveCircle_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_GetResult_Request>) -> bool;
}

// Corresponds to learning_interface__action__MoveCircle_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveCircle_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for MoveCircle_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__action__MoveCircle_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__action__MoveCircle_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveCircle_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveCircle_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveCircle_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/action/MoveCircle_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_GetResult_Request() }
  }
}


#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "learning_interface__rosidl_generator_c")]
extern "C" {
    fn learning_interface__action__MoveCircle_GetResult_Response__init(msg: *mut MoveCircle_GetResult_Response) -> bool;
    fn learning_interface__action__MoveCircle_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_GetResult_Response>, size: usize) -> bool;
    fn learning_interface__action__MoveCircle_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_GetResult_Response>);
    fn learning_interface__action__MoveCircle_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveCircle_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveCircle_GetResult_Response>) -> bool;
}

// Corresponds to learning_interface__action__MoveCircle_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveCircle_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::MoveCircle_Result,

}



impl Default for MoveCircle_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !learning_interface__action__MoveCircle_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to learning_interface__action__MoveCircle_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveCircle_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { learning_interface__action__MoveCircle_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveCircle_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveCircle_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "learning_interface/action/MoveCircle_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__learning_interface__action__MoveCircle_GetResult_Response() }
  }
}






#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__learning_interface__action__MoveCircle_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to learning_interface__action__MoveCircle_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveCircle_SendGoal;

impl rosidl_runtime_rs::Service for MoveCircle_SendGoal {
    type Request = MoveCircle_SendGoal_Request;
    type Response = MoveCircle_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__learning_interface__action__MoveCircle_SendGoal() }
    }
}




#[link(name = "learning_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__learning_interface__action__MoveCircle_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to learning_interface__action__MoveCircle_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveCircle_GetResult;

impl rosidl_runtime_rs::Service for MoveCircle_GetResult {
    type Request = MoveCircle_GetResult_Request;
    type Response = MoveCircle_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__learning_interface__action__MoveCircle_GetResult() }
    }
}


