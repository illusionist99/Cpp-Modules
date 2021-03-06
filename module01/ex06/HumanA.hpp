/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:50:12 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 15:21:51 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__  
#define __HUMANA_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanA {

    private:
        std::string name;
        Weapon &f;

    public:

        HumanA( std::string name, Weapon & w ) : name(name), f(w) {
            std::cout << "Constructor Called" << std::endl;
        }
        
        ~HumanA( void ) {
            std::cout << "Destructor Called" << std::endl;
        }

        void    attack( void ) const;
};

#endif
