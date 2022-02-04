#pragma once

// Stolen this setup from OIIO
#if defined(_WIN32) || defined(__CYGWIN__)
#    ifdef PROJECT_STATIC_DEFINE
#        define PROJECT_CPPMM_IMPORT
#        define PROJECT_CPPMM_EXPORT
#    else
#        define PROJECT_CPPMM_IMPORT __declspec(dllimport)
#        define PROJECT_CPPMM_EXPORT __declspec(dllexport)
#    endif
#    define PROJECT_LOCAL
#else
#    define PROJECT_CPPMM_IMPORT __attribute__((visibility("default")))
#    define PROJECT_CPPMM_EXPORT __attribute__((visibility("default")))
#    define PROJECT_CPPMM_LOCAL __attribute__((visibility("hidden")))
#endif

#if defined(PROJECT_CPPMM_BUILD_EXPORT)
#    define PROJECT_CPPMM_API PROJECT_CPPMM_EXPORT
#else
#    define PROJECT_CPPMM_API PROJECT_CPPMM_IMPORT
#endif

// Alignment
#if defined(_WIN32) || defined(__CYGWIN__)
    #define PROJECT_CPPMM_ALIGN(x) __declspec(align(x))
#else
    #define PROJECT_CPPMM_ALIGN(x) __attribute__((aligned(x)))
#endif


