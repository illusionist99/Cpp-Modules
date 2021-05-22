/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:45:21 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/22 15:45:21 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main( void ) {

    ZombieEvent event;

    Zombie *zombie = event.newZombie("Covid");
    Zombie *chump = event.randomChump();

    zombie->advert();
    zombie->advert();
    event.SetZombieType("Fighter", zombie);
    zombie->advert();
    zombie->announce();
    delete zombie;


    chump->advert();
    event.SetZombieType("Assassin", chump);
    chump->advert();
    chump->announce();

    delete chump;

    return (0);
}