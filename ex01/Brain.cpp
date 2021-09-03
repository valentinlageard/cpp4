#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created." << std::endl;
}

Brain::Brain(Brain const & original) {
	for (int i=0; i < 100; i++) {
		_ideas[i] = original._ideas[i];
	}
}

Brain::~Brain() {
	std::cout << "Brain destroyed." << std::endl;
}

Brain & Brain::operator=(Brain const & rhs) {
	for (int i=0; i < 100; i++) {
		_ideas[i] = rhs._ideas[i];
	}
	return *this;
}
