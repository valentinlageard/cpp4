#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	Animal * animals[100];

	// Fill the array
	for (int i=0; i<100; i++) {
		if (i%2) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
	}

	// Make them make sound
	for (int i=0; i<100; i++) {
		animals[i]->makeSound();
	}

	// Delete them
	for (int i=0; i<100; i++) {
		delete animals[i];
	}

	Cat * felix = new Cat();
	Cat * garfield = new Cat(*felix);
	std::cout << "Felix brain address: " << std::hex << felix->getBrainPtr() << std::endl;
	std::cout << "Garfield brain address: " << std::hex << garfield->getBrainPtr() << std::endl;

	Dog * ruffie = new Dog();
	Dog * rex = new Dog(*ruffie);
	std::cout << "Ruffie brain address: " << std::hex << ruffie->getBrainPtr() << std::endl;
	std::cout << "Rex brain address: " << std::hex << rex->getBrainPtr() << std::endl;

	delete felix;
	delete garfield;
	delete ruffie;
	delete rex;


	return 0;
}
