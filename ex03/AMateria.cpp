#include "AMateria.hpp"

AMateria::AMateria():
	_type("dummy")
{}

AMateria::AMateria(std::string const & type):
	_type(type)
{}

AMateria::AMateria(AMateria const & original) {
	(void)original;
}

AMateria & AMateria::operator=(AMateria const & rhs) {
	(void)rhs;
	return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}
