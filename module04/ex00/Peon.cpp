/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:11:43 by malaoui           #+#    #+#             */
/*   Updated: 2021/06/05 19:11:44 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"


Peon::Peon( std::string name ) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( const Peon & src ) : Victim(src._name)
{
	this->_name = src._name;
}

void			Peon::getPolymorphed( void ) const {

	std::cout << this->_name << "has been turned into a pink pony!" << std::endl;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &				Peon::operator=( Peon const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Peon const & i )
{
	o << "I'm " << i.getName() <<  " and I like otters!" << std::endl;
	return o;
}

