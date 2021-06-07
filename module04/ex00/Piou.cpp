/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Piou.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:11:37 by malaoui           #+#    #+#             */
/*   Updated: 2021/06/05 19:11:38 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Piou.hpp"


Piou::Piou( std::string name ) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Piou::Piou( const Piou & src ) : Victim(src._name)
{
	this->_name = src._name;
}

void			Piou::getPolymorphed( void ) const {

	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Piou::~Piou( void )
{
	std::cout << "Bleuark..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Piou &				Piou::operator=( Piou const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Piou const & i )
{
	o << "I'm " << i.getName() <<  " and I like otters!" << std::endl;
	return o;
}

