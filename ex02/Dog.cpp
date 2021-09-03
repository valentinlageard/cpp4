#include "Dog.hpp"

Dog::Dog():
	Animal("Dog")
{
	_brain = new Brain();
	std::cout << "Dog of type " << type << " created." << std::endl;
}

Dog::Dog(Dog const & original):
	Animal(original.type)
{
	_brain = new Brain(*original._brain);
	std::cout << "Copy of dog " << original.type << " created." << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destroyed." << std::endl;
}

Dog & Dog::operator=(Dog const & rhs) {
	type = rhs.type;
	delete _brain;
	_brain = new Brain(*rhs._brain);
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Dog makes : \"woof woof\"" << std::endl;
}

Brain * Dog::getBrainPtr() const {
	return _brain;
}
