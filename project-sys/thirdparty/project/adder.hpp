#pragma once

namespace project
{
    class Adder
    {
    public:
        Adder(int a, int b);

        int a;
        int b;

        int add() const;
        void print_add() const;
    };
} // namespace project
