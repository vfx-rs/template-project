#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C, align(4))]
#[derive(Clone)]
pub struct project__Adder_t {
    pub a: c_int,
    pub b: c_int,
}



extern "C" {

pub fn project__Adder_ctor(this_: *mut project_Adder_t, a: c_int, b: c_int) -> Exception;

pub fn project__Adder_add(this_: *const project_Adder_t, return_: *mut c_int) -> Exception;

pub fn project__Adder_print_add(this_: *const project_Adder_t) -> Exception;


} // extern "C"
