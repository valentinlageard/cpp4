#include "Dog.hpp"

Dog::Dog():
	Animal("Dog")
{
	std::cout << "Dog of type " << type << " created." << std::endl;
}

Dog::Dog(Dog const & original):
	Animal(original.type)
{
	std::cout << "Copy of dog " << original.type << " created." << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destroyed." << std::endl;
}


Dog & Dog::operator=(Dog const & rhs) {
	if (this == &rhs) {
		return *this;
	}
	type = rhs.type;
	return *this;
}


void Dog::makeSound() const {
	std::cout << "Dog makes : \"woof woof\"" << std::endl;
}
