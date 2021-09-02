#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* meta_wrong = new WrongAnimal();
	const WrongAnimal* i_wrong = new WrongCat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << i_wrong->getType() << " " << std::endl;
	i_wrong->makeSound(); //will output the cat sound!
	meta_wrong->makeSound();

	delete meta;
	delete i;
	delete j;
	delete meta_wrong;
	delete i_wrong;

	return 0;
}
