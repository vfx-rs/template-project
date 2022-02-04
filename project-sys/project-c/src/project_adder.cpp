#include "project_adder_private.h"

#include <new>

#include <stdexcept>

PROJECT_CPPMM_API unsigned int project__Adder_ctor(
    project_Adder_t * this_
    , int a
    , int b)
{
    try {
        new (this_) project::Adder(a, b);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

PROJECT_CPPMM_API unsigned int project__Adder_add(
    project_Adder_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> add();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

PROJECT_CPPMM_API unsigned int project__Adder_print_add(
    project_Adder_t const * this_)
{
    try {
        (to_cpp(this_)) -> print_add();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

