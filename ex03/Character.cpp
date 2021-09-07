#include "Character.hpp"

Character::Character():
	_name("dummy")
{
	_init_inventory();
}

Character::Character(std::string const name):
	_name(name)
{
	_init_inventory();
}

Character::Character(Character const & original):
	_name(original._name)
{
	_init_inventory();
	for (unsigned int i=0; i < _inventory_size; i++) {
		if (original._inventory[i]) {
			_inventory[i] = original._inventory[i]->clone();
		}
	}
}

Character::~Character() {
	for (unsigned int i=0; i < _inventory_size; i++) {
		if (_inventory[i]) {
			delete _inventory[i];
		}
	}
}

Character & Character::operator=(Character const & rhs) {
	if (this == &rhs) {
		return *this;
	}
	for (unsigned int i=0; i < _inventory_size; i++) {
		if (_inventory[i]) {
			delete _inventory[i];
			_inventory[i] = NULL;
		}
		if (rhs._inventory[i]) {
			_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

void Character::_init_inventory() {
	for (unsigned int i=0; i < _inventory_size; i++) {
		_inventory[i] = NULL;
	}
}

std::string const & Character::getName() const {
	return _name;
}

void Character::equip(AMateria * m) {
	for (unsigned int i=0; i < _inventory_size; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target) {
	if (_inventory[idx]) {
		_inventory[idx]->use(target);
		delete _inventory[idx];
		_inventory[idx] = NULL;
	}
}
