#ifndef Ice_HPP
# define Ice_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice: public AMateria {

public:
	Ice();
	Ice(Ice const & original);
	virtual ~Ice();
	Ice & operator=(Ice const & rhs);

	virtual AMateria * clone() const;
	virtual void use(ICharacter & target);
};

#endif
