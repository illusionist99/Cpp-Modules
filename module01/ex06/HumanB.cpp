/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:50:14 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 15:17:12 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack( void ) const {

    std::cout << this->name << " attacks with his " << w->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon & s) {

    this->w = &s;
}