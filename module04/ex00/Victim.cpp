/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:11:26 by malaoui           #+#    #+#             */
/*   Updated: 2021/06/05 19:11:27 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"


Victim::Victim( std::string name ) : _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim( const Victim & src )
{
}

Victim::~Victim( void )
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim &				Victim::operator=( Victim const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		std::cout << "Assignement  OverLoad Operator Called" << std::endl;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	o << "I'm " << i.getName() <<  " and I like otters!" << std::endl;
	return o;
}

void	Victim::setName( std::string name ) {

	this->_name = name;
}

std::string 	Victim::getName( void ) const  {

	return this->_name;
}

void			Victim::getPolymorphed( void ) const {

	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}
