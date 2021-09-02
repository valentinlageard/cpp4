#ifndef WrongCat_HPP
# define WrongCat_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:
	WrongCat();
	WrongCat(WrongCat const & original);
	virtual ~WrongCat();
	WrongCat & operator=(WrongCat const & rhs);

	virtual void makeSound() const;
};

#endif
