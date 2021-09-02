#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>
# include <string>

class WrongAnimal {

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const & original);
	virtual ~WrongAnimal();
	WrongAnimal & operator=(WrongAnimal const & rhs);

	std::string getType() const;
	void makeSound() const;

protected:
	std::string type;
};

#endif
