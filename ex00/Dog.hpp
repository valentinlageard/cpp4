#ifndef Dog_HPP
# define Dog_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog: public Animal {

public:
	Dog();
	Dog(Dog const & original);
	virtual ~Dog();
	Dog & operator=(Dog const & rhs);

	virtual void makeSound() const;
};

#endif
