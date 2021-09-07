#include "Cat.hpp"

Cat::Cat():
	Animal("Cat")
{
	std::cout << "Cat of type " << type << " created." << std::endl;
}

Cat::Cat(Cat const & original):
	Animal(original.type)
{
	std::cout << "Copy of cat " << original.type << " created." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destroyed." << std::endl;
}


Cat & Cat::operator=(Cat const & rhs) {
	if (this == &rhs) {
		return *this;
	}
	type = rhs.type;
	return *this;
}


void Cat::makeSound() const {
	std::cout << "Cat makes : \"meoooow\"" << std::endl;
}
