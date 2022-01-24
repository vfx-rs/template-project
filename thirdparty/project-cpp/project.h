#pragma once

namespace project
{
    class Adder
    {
    public:
        Adder(int a, int b);

        int a;
        int b;

        int add();
        void print_add();
    };
} // namespace project
