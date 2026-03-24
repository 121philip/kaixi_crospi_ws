#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "betfsm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__msg__Trace() -> *const std::ffi::c_void;
}

#[link(name = "betfsm_interfaces__rosidl_generator_c")]
extern "C" {
    fn betfsm_interfaces__msg__Trace__init(msg: *mut Trace) -> bool;
    fn betfsm_interfaces__msg__Trace__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Trace>, size: usize) -> bool;
    fn betfsm_interfaces__msg__Trace__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Trace>);
    fn betfsm_interfaces__msg__Trace__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Trace>, out_seq: *mut rosidl_runtime_rs::Sequence<Trace>) -> bool;
}

// Corresponds to betfsm_interfaces__msg__Trace
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trace {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_states: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for Trace {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !betfsm_interfaces__msg__Trace__init(&mut msg as *mut _) {
        panic!("Call to betfsm_interfaces__msg__Trace__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Trace {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__msg__Trace__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__msg__Trace__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { betfsm_interfaces__msg__Trace__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Trace {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Trace where Self: Sized {
  const TYPE_NAME: &'static str = "betfsm_interfaces/msg/Trace";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__betfsm_interfaces__msg__Trace() }
  }
}


