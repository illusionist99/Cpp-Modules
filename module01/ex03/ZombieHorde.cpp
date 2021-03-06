/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:45:37 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 15:05:36 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string random_name() {
    int         len;
    std::string c;

    len = std::rand() % 11;
    if (len == 0)
        len = 5;
    for (int i = 0; i < len; i++) {
        c += ('a' + rand() % 26);
    }
    return c;
}

ZombieHorde::ZombieHorde(int n) {

    Zombie *zombies = new Zombie[n];

    for(int i = 0; i < n; i++) {
        zombies[i].name = random_name();
    }
    this->z = zombies;
    this->n = n;
}

void ZombieHorde::announce( void ) const {

    for(int i = 0; i < this->n; i++) {
        this->z[i].announce();
    }
}
