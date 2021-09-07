#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class IMateriaSource;

class MateriaSource: public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(MateriaSource const & original);
	virtual ~MateriaSource();
	MateriaSource & operator=(MateriaSource const & rhs);

	virtual void learnMateria(AMateria * m);
	virtual AMateria* createMateria(std::string const & type);

private:
	static unsigned int const _known_materia_size = 4;
	AMateria * _known_materia[_known_materia_size];

	void _init_known_materia();
};

#endif
