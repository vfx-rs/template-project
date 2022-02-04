#pragma once
#include <project_adder.h>


#include "project-errors-private.h"

#include <adder.hpp>
#include <cstring>

inline project::Adder const & to_cpp_ref(
    project_Adder_t const * rhs)
{
        return *(reinterpret_cast<project::Adder const * >(rhs));
}

inline project::Adder & to_cpp_ref(
    project_Adder_t * rhs)
{
        return *(reinterpret_cast<project::Adder * >(rhs));
}

inline project::Adder const * to_cpp(
    project_Adder_t const * rhs)
{
        return reinterpret_cast<project::Adder const * >(rhs);
}

inline project::Adder * to_cpp(
    project_Adder_t * rhs)
{
        return reinterpret_cast<project::Adder * >(rhs);
}

inline void to_c(
    project_Adder_t const * * lhs
    , project::Adder const & rhs)
{
        *(lhs) = reinterpret_cast<project_Adder_t const * >(&(rhs));
}

inline void to_c(
    project_Adder_t const * * lhs
    , project::Adder const * rhs)
{
        *(lhs) = reinterpret_cast<project_Adder_t const * >(rhs);
}

inline void to_c(
    project_Adder_t * * lhs
    , project::Adder & rhs)
{
        *(lhs) = reinterpret_cast<project_Adder_t * >(&(rhs));
}

inline void to_c(
    project_Adder_t * * lhs
    , project::Adder * rhs)
{
        *(lhs) = reinterpret_cast<project_Adder_t * >(rhs);
}

inline void to_c_copy(
    project_Adder_t * lhs
    , project::Adder const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

