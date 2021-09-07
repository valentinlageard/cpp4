#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():
	type("dummy")
{
	std::cout << "WrongAnimal of type " << type << " created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string new_type):
	type(new_type)
{
	std::cout << "WrongAnimal of type " << new_type << " created." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & original):
	type(original.type)
{
	std::cout << "Copy of wronganimal " << type << " created." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal of type " << type << " destroyed." << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs) {
	if (this == &rhs) {
		return *this;
	}
	type = rhs.type;
	return *this;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal isn't specified enough to make a sound, silly !" << std::endl;
}
