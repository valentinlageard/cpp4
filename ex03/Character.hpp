#ifndef Character_HPP
# define Character_HPP

# include <string>
# include "AMateria.hpp"

class AMateria;

class Character: public ICharacter {

public:
	Character();
	Character(std::string const name);
	Character(Character const & original);
	Character & operator=(Character const & rhs);
	virtual ~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria * m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter & target);

private:
	std::string const _name;
	static unsigned int const _inventory_size = 4;
	AMateria * _inventory[_inventory_size];

	void _init_inventory();
};

#endif
