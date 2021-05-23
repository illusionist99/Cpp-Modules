/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:50:17 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 11:50:18 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__  
#define __HUMANB_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanB {

    private:
        Weapon *w;
        std::string name;

    public:
        HumanB( std::string name ) : name(name) {
            std::cout << "Constructor Called" << std::endl;
        }
        ~HumanB( void ) {
            std::cout << "Destructor Called" << std::endl;
        }
        void    attack( void ) {
            std::cout << this->name << " attacks with his " << w->getType() << std::endl;
        }
        void setWeapon(Weapon & s) {
            this->w = &s;
        }
};

#endif
