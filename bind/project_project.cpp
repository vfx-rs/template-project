#include <project.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind
{
    namespace project
    {
        class Adder
        {
        public:
            using BoundType = ::project::Adder;

            Adder(int a, int b);

            int a;
            int b;

            int add();
            void print_add();
        } CPPMM_VALUETYPE CPPMM_TRIVIALLY_COPYABLE CPPMM_TRIVIALLY_MOVABLE;
    } // namespace project

} // namespace cppmm_bind
