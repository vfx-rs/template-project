#include "project-errors.h"
#include "project-errors-private.h"

thread_local std::string TLG_EXCEPTION_STRING;

PROJECT_CPPMM_API const char* project_get_exception_string() {
    return TLG_EXCEPTION_STRING.c_str();
}

