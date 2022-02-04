use project_sys as sys;

pub struct Adder {
    inner: sys::project_Adder_t,
}

impl Adder {
    pub fn new(a: i32, b: i32) -> Self {
        let mut inner = std::mem::MaybeUninit::uninit();

        unsafe {
            sys::project_Adder_ctor(inner.as_mut_ptr(), a, b)
                .into_result()
                .unwrap();

            Self {
                inner: inner.assume_init(),
            }
        }
    }

    pub fn add(&self) -> i32 {
        let mut result = 0;
        unsafe {
            sys::project_Adder_add(&self.inner, &mut result);
        }

        result
    }

    pub fn print_add(&self) {
        unsafe {
            sys::project_Adder_print_add(&self.inner);
        }
    }
}
