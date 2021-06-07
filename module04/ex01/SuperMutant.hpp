#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>

class SuperMutant
{

	public:

		SuperMutant();
		SuperMutant( SuperMutant const & src );
		~SuperMutant();

		SuperMutant &		operator=( SuperMutant const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, SuperMutant const & i );

#endif /* ***************************************************** SUPERMUTANT_H */