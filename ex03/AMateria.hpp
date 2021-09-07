#ifndef AMateria_HPP
# define AMateria_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

public:
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type

	virtual AMateria * clone() const = 0;
	virtual void use(ICharacter & target);

protected:
	std::string const _type;

private:
	AMateria(AMateria const & original);
	AMateria & operator=(AMateria const & rhs);
};

#endif
