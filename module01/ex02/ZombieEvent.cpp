/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:45:28 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/22 15:45:29 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void    ZombieEvent::SetZombieType( std::string type, Zombie *ptr ) {
    ptr->type = type;
}

Zombie  *ZombieEvent::newZombie( std::string name ) {

    Zombie  *z = new Zombie;

    z->name = name;
    return z;
}

std::string random_name() {
    int         len;
    std::string c;

    srand(time(NULL));
    len = std::rand() % 11;
    if (len == 0)
        len = 5;
    for (int i = 0; i < len; i++) {
        c += ('a' + rand() % 26);
    }
    return c;
}

Zombie *ZombieEvent::randomChump( void ) {
    return (this->newZombie(random_name()));
}
