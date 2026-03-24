
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_Goal() -> *const std::ffi::c_void;
}

#[link(name = "betfsm_interfaces__rosidl_generator_c")]
extern "C" {
    fn betfsm_interfaces__action__Task_Goal__init(msg: *mut Task_Goal) -> bool;
    fn betfsm_interfaces__action__Task_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Task_Goal>, size: usize) -> bool;
    fn betfsm_interfaces__action__Task_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Task_Goal>);
    fn betfsm_interfaces__action__Task_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Task_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Task_Goal>) -> bool;
}

// Corresponds to betfsm_interfaces__action__Task_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Task_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameters: rosidl_runtime_rs::String,

}



impl Default for Task_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !betfsm_interfaces__action__Task_Goal__init(&mut msg as *mut _) {
        panic!("Call to betfsm_interfaces__action__Task_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Task_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Task_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Task_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "betfsm_interfaces/action/Task_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_Goal() }
  }
}


#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_Result() -> *const std::ffi::c_void;
}

#[link(name = "betfsm_interfaces__rosidl_generator_c")]
extern "C" {
    fn betfsm_interfaces__action__Task_Result__init(msg: *mut Task_Result) -> bool;
    fn betfsm_interfaces__action__Task_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Task_Result>, size: usize) -> bool;
    fn betfsm_interfaces__action__Task_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Task_Result>);
    fn betfsm_interfaces__action__Task_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Task_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Task_Result>) -> bool;
}

// Corresponds to betfsm_interfaces__action__Task_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Task_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub outcome: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameters: rosidl_runtime_rs::String,

}



impl Default for Task_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !betfsm_interfaces__action__Task_Result__init(&mut msg as *mut _) {
        panic!("Call to betfsm_interfaces__action__Task_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Task_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Task_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Task_Result where Self: Sized {
  const TYPE_NAME: &'static str = "betfsm_interfaces/action/Task_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_Result() }
  }
}


#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "betfsm_interfaces__rosidl_generator_c")]
extern "C" {
    fn betfsm_interfaces__action__Task_Feedback__init(msg: *mut Task_Feedback) -> bool;
    fn betfsm_interfaces__action__Task_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Task_Feedback>, size: usize) -> bool;
    fn betfsm_interfaces__action__Task_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Task_Feedback>);
    fn betfsm_interfaces__action__Task_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Task_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Task_Feedback>) -> bool;
}

// Corresponds to betfsm_interfaces__action__Task_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Task_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameters: rosidl_runtime_rs::String,

}



impl Default for Task_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !betfsm_interfaces__action__Task_Feedback__init(&mut msg as *mut _) {
        panic!("Call to betfsm_interfaces__action__Task_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Task_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Task_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Task_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "betfsm_interfaces/action/Task_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_Feedback() }
  }
}


#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "betfsm_interfaces__rosidl_generator_c")]
extern "C" {
    fn betfsm_interfaces__action__Task_FeedbackMessage__init(msg: *mut Task_FeedbackMessage) -> bool;
    fn betfsm_interfaces__action__Task_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Task_FeedbackMessage>, size: usize) -> bool;
    fn betfsm_interfaces__action__Task_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Task_FeedbackMessage>);
    fn betfsm_interfaces__action__Task_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Task_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Task_FeedbackMessage>) -> bool;
}

// Corresponds to betfsm_interfaces__action__Task_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Task_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Task_Feedback,

}



impl Default for Task_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !betfsm_interfaces__action__Task_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to betfsm_interfaces__action__Task_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Task_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Task_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Task_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "betfsm_interfaces/action/Task_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_FeedbackMessage() }
  }
}




#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "betfsm_interfaces__rosidl_generator_c")]
extern "C" {
    fn betfsm_interfaces__action__Task_SendGoal_Request__init(msg: *mut Task_SendGoal_Request) -> bool;
    fn betfsm_interfaces__action__Task_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Task_SendGoal_Request>, size: usize) -> bool;
    fn betfsm_interfaces__action__Task_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Task_SendGoal_Request>);
    fn betfsm_interfaces__action__Task_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Task_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Task_SendGoal_Request>) -> bool;
}

// Corresponds to betfsm_interfaces__action__Task_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Task_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Task_Goal,

}



impl Default for Task_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !betfsm_interfaces__action__Task_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to betfsm_interfaces__action__Task_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Task_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Task_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Task_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "betfsm_interfaces/action/Task_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_SendGoal_Request() }
  }
}


#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "betfsm_interfaces__rosidl_generator_c")]
extern "C" {
    fn betfsm_interfaces__action__Task_SendGoal_Response__init(msg: *mut Task_SendGoal_Response) -> bool;
    fn betfsm_interfaces__action__Task_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Task_SendGoal_Response>, size: usize) -> bool;
    fn betfsm_interfaces__action__Task_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Task_SendGoal_Response>);
    fn betfsm_interfaces__action__Task_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Task_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Task_SendGoal_Response>) -> bool;
}

// Corresponds to betfsm_interfaces__action__Task_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Task_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Task_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !betfsm_interfaces__action__Task_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to betfsm_interfaces__action__Task_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Task_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Task_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Task_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "betfsm_interfaces/action/Task_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_SendGoal_Response() }
  }
}


#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "betfsm_interfaces__rosidl_generator_c")]
extern "C" {
    fn betfsm_interfaces__action__Task_GetResult_Request__init(msg: *mut Task_GetResult_Request) -> bool;
    fn betfsm_interfaces__action__Task_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Task_GetResult_Request>, size: usize) -> bool;
    fn betfsm_interfaces__action__Task_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Task_GetResult_Request>);
    fn betfsm_interfaces__action__Task_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Task_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Task_GetResult_Request>) -> bool;
}

// Corresponds to betfsm_interfaces__action__Task_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Task_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Task_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !betfsm_interfaces__action__Task_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to betfsm_interfaces__action__Task_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Task_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Task_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Task_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "betfsm_interfaces/action/Task_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_GetResult_Request() }
  }
}


#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "betfsm_interfaces__rosidl_generator_c")]
extern "C" {
    fn betfsm_interfaces__action__Task_GetResult_Response__init(msg: *mut Task_GetResult_Response) -> bool;
    fn betfsm_interfaces__action__Task_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Task_GetResult_Response>, size: usize) -> bool;
    fn betfsm_interfaces__action__Task_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Task_GetResult_Response>);
    fn betfsm_interfaces__action__Task_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Task_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Task_GetResult_Response>) -> bool;
}

// Corresponds to betfsm_interfaces__action__Task_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Task_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Task_Result,

}



impl Default for Task_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !betfsm_interfaces__action__Task_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to betfsm_interfaces__action__Task_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Task_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__action__Task_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Task_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Task_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "betfsm_interfaces/action/Task_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__action__Task_GetResult_Response() }
  }
}






#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__betfsm_interfaces__action__Task_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to betfsm_interfaces__action__Task_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Task_SendGoal;

impl rosidl_runtime_rs::Service for Task_SendGoal {
    type Request = Task_SendGoal_Request;
    type Response = Task_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__betfsm_interfaces__action__Task_SendGoal() }
    }
}




#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__betfsm_interfaces__action__Task_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to betfsm_interfaces__action__Task_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Task_GetResult;

impl rosidl_runtime_rs::Service for Task_GetResult {
    type Request = Task_GetResult_Request;
    type Response = Task_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__betfsm_interfaces__action__Task_GetResult() }
    }
}


