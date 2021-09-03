#ifndef Animal_HPP
# define Animal_HPP

# include <iostream>
# include <string>

class Animal {

public:
	Animal();
	Animal(std::string type);
	Animal(Animal const & original);
	virtual ~Animal();
	Animal & operator=(Animal const & rhs);

	std::string getType() const;
	virtual void makeSound() const = 0;

protected:
	std::string type;
};

#endif
