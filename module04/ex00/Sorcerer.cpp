/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:11:32 by malaoui           #+#    #+#             */
/*   Updated: 2021/06/05 19:11:33 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string name, std::string title ) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer & rhs )
{
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	std::cout << "Copy Constructor Called" << std::endl;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}



Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
		std::cout << "Assignement  OverLoad Operator Called" << std::endl;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}

void	Sorcerer::setTitle( std::string title ) {

	this->_title = title;
}

std::string 	Sorcerer::getTitle( void ) const  {

	return this->_title;
}

void	Sorcerer::setName( std::string name ) {

	this->_name = name;
}

std::string 	Sorcerer::getName( void ) const  {

	return this->_name;
}


void			Sorcerer::polymorph(Victim const & rhs) const {

	rhs.getPolymorphed();
}