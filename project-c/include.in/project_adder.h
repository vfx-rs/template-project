#pragma once
#include "project-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct project__Adder_t_s {
    int a;
    int b;
} PROJECT_CPPMM_ALIGN(4) project__Adder_t;
typedef project__Adder_t project_Adder_t;


PROJECT_CPPMM_API unsigned int project__Adder_ctor(
    project_Adder_t * this_
    , int a
    , int b);
#define project_Adder_ctor project__Adder_ctor


PROJECT_CPPMM_API unsigned int project__Adder_add(
    project_Adder_t const * this_
    , int * return_);
#define project_Adder_add project__Adder_add


PROJECT_CPPMM_API unsigned int project__Adder_print_add(
    project_Adder_t const * this_);
#define project_Adder_print_add project__Adder_print_add


#ifdef __cplusplus
}
#endif
