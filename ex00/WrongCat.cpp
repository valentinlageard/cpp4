#include "WrongCat.hpp"

WrongCat::WrongCat():
	WrongAnimal("WrongCat")
{
	std::cout << "WrongCat of type " << type << " created." << std::endl;
}

WrongCat::WrongCat(WrongCat const & original):
	WrongAnimal(original.type)
{
	std::cout << "Copy of wrongcat " << original.type << " created." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destroyed." << std::endl;
}


WrongCat & WrongCat::operator=(WrongCat const & rhs) {
	type = rhs.type;
	return *this;
}


void WrongCat::makeSound() const {
	std::cout << "WrongCat makes : \"meoooow\"" << std::endl;
}
