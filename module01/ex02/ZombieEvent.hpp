/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:45:30 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/22 15:45:31 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIEEVENT_HPP__
# define __ZOMBIEEVENT_HPP__

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
    public:
        void    SetZombieType( std::string type, Zombie *z );
        Zombie  *newZombie( std::string name );
        Zombie  *randomChump( void );
        ZombieEvent( void ) {
			std::cout << "Constructor Called" << std::endl;
		}
		~ZombieEvent( void ) {
			std::cout << "Destructor Called" << std::endl;
		}
};

#endif