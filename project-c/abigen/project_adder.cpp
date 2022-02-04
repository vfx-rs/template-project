#include <adder.hpp>
#include <abigen/project_adder.hpp>

void abi_gen_project_adder(std::ostream& os) {
	os << "project::Adder" << "|" << sizeof(project::Adder) << "|" << alignof(project::Adder) << "\n";
}
