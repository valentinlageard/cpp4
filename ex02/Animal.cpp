#include "Animal.hpp"

Animal::Animal():
	type("dummy")
{
	std::cout << "Animal of type " << type << " created." << std::endl;
}

Animal::Animal(std::string new_type):
	type(new_type)
{
	std::cout << "Animal of type " << new_type << " created." << std::endl;
}

Animal::Animal(Animal const & original):
	type(original.type)
{
	std::cout << "Copy of animal " << type << " created." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal of type " << type << " destroyed." << std::endl;
}

Animal & Animal::operator=(Animal const & rhs) {
	if (this == &rhs) {
		return *this;
	}
	type = rhs.type;
	return *this;
}

std::string Animal::getType() const {
	return type;
}
