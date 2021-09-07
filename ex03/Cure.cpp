#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{}

Cure::Cure(Cure const & original):
	AMateria(original._type)
{}

Cure::~Cure() {}

Cure & Cure::operator=(Cure const & rhs) {
	(void)rhs;
	return *this;
}

AMateria * Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
