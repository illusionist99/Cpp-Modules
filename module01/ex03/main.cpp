/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:03:46 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 15:03:56 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int     main( void ) {

    ZombieHorde kk(5);
    kk.announce();
    for( int i = 0; i < 5; i++) {
        std::cout << kk.z[i].name << std::endl;
    }
    return 0;
}
