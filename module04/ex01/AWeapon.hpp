#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{

	public:

		AWeapon( std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon( AWeapon const & src );

		std::string getName() const;
		int			getAPCost() const ;
		int			getDamage() const ;
		virtual void		attack() const = 0;
		AWeapon &		operator=( AWeapon const & rhs );

	protected:

		std::string _name;
		int 		_apcost;
		int			_damage;

};

std::ostream &			operator<<( std::ostream & o, AWeapon const & i );

#endif /* ********************************************************* AWEAPON_H */