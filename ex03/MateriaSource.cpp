#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	_init_known_materia();
}

MateriaSource::MateriaSource(MateriaSource const & original) {
	_init_known_materia();
	for (unsigned int i=0; i < _known_materia_size; i++) {
		if (original._known_materia[i]) {
			_known_materia[i] = original._known_materia[i]->clone();
		}
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {
	if (this == &rhs) {
		return *this;
	}
	for (unsigned int i=0; i < _known_materia_size; i++) {
		if (_known_materia[i]) {
			delete _known_materia[i];
			_known_materia[i] = NULL;
		}
		if (rhs._known_materia[i]) {
			_known_materia[i] = rhs._known_materia[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (unsigned int i=0; i < _known_materia_size; i++) {
		if (_known_materia[i]) {
			delete _known_materia[i];
		}
	}
}


void MateriaSource::learnMateria(AMateria * m) {
	for (unsigned int i=0; i < _known_materia_size; i++) {
		if (!_known_materia[i]) {
			_known_materia[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (unsigned int i=0; i < _known_materia_size; i++) {
		if (_known_materia[i] && _known_materia[i]->getType() == type) {
			return _known_materia[i]->clone();
		}
	}
	return 0;
}

void MateriaSource::_init_known_materia() {
	for (unsigned int i=0; i < _known_materia_size; i++) {
		_known_materia[i] = NULL;
	}
}
