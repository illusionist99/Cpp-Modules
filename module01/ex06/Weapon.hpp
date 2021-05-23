/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:50:23 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 15:20:00 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Weapon_HPP__
#define __Weapon_HPP__

#include <iostream>

class Weapon {

    private:
    
        std::string type;

    public:
    
        Weapon( std::string msg ) : type(msg) {
            std::cout << "Constructor Called" << std::endl;
        }

        ~Weapon( void ) {
            std::cout << "Destructor Called" << std::endl;
        }

        void setType( std::string t);
        std::string getType() const;
};

#endif
