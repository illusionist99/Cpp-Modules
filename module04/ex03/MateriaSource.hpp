#pragma once

# include <iostream>
# include <string>

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		MateriaSource &		operator=( MateriaSource const & rhs );

	private:

		AMateria	*_slots[4];
		int			_count;
};

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i );

