#include <iostream>
#include "adder.hpp"

namespace project
{
    Adder::Adder(int a, int b) : a(a), b(b) {}

    int Adder::add() const { return a + b; }

    void Adder::print_add() const { std::cout << add() << std::endl; }
} // namespace project
