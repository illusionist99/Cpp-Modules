/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:45:13 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/22 15:45:14 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( void ) {
	std::cout << "Pony Constractor Called" << std::endl;
}

Pony::~Pony( void ) {
	std::cout << "Pony Deconstractor Called" << std::endl;
}

Pony	Pony::ponyOnTheStack( void ) {
	Pony lilia;

	std::cout << "Pony On The Stack" << std::endl;
	lilia.name = "lillia";
	lilia.age = 19;
	return lilia;
}

Pony	*Pony::ponyOnTheHeap( void ) {
	Pony *Hecarim = new Pony;

	std::cout << "Pony On The Heap" << std::endl;
	Hecarim->name = "hecarim";
	Hecarim->age = 20;
	return Hecarim;
}
