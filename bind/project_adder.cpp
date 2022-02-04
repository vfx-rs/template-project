#include <adder.hpp>

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

            int add() const;
            void print_add() const;
        } CPPMM_VALUETYPE CPPMM_TRIVIALLY_COPYABLE CPPMM_TRIVIALLY_MOVABLE;
    } // namespace project

} // namespace cppmm_bind
