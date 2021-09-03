#ifndef Cat_HPP
# define Cat_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {

public:
	Cat();
	Cat(Cat const & original);
	virtual ~Cat();
	Cat & operator=(Cat const & rhs);

	virtual void makeSound() const;
	Brain * getBrainPtr() const;

private:
	Brain * _brain;
};

#endif
