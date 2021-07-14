#pragma once

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Character : public ICharacter
{
	std::string _name;
	AMateria	*_slots[4];
	int			_index;

	public:

		Character( std::string name );
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );
		std::string const & getName() const;
		int	getIndex() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

std::ostream &			operator<<( std::ostream & o, Character const & i );
