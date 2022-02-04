#include <fstream>

#include "project_adder.hpp"

int main() {
    std::ofstream os("abigen.txt");

    abi_gen_project_adder(os);
}
