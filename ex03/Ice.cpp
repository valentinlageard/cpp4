#include "Ice.hpp"

Ice::Ice():
	AMateria("ice")
{}

Ice::Ice(Ice const & original):
	AMateria(original._type)
{}

Ice::~Ice() {}

Ice & Ice::operator=(Ice const & rhs) {
	(void)rhs;
	return *this;
}

AMateria * Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
