#include "Cat.hpp"

Cat::Cat():
	Animal("Cat")
{
	_brain = new Brain();
	std::cout << "Cat of type " << type << " created." << std::endl;
}

Cat::Cat(Cat const & original):
	Animal(original.type)
{
	_brain = new Brain(*original._brain);
	std::cout << "Copy of cat " << original.type << " created." << std::endl;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destroyed." << std::endl;
}

Cat & Cat::operator=(Cat const & rhs) {
	if (this == &rhs) {
		return *this;
	}
	type = rhs.type;
	delete _brain;
	_brain = new Brain(*rhs._brain);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat makes : \"meoooow\"" << std::endl;
}

Brain * Cat::getBrainPtr() const {
	return _brain;
}
