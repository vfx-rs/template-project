#include <iostream>
#include "project.h"

namespace project
{
    Adder::Adder(int a, int b) : a(a), b(b) {}

    int Adder::add() { return a + b; }

    void Adder::print_add() { std::cout << add() << std::endl; }
} // namespace project
