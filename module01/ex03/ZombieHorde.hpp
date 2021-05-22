/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:45:39 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/22 15:45:40 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIEHORDE_HPP__
# define __ZOMBIEHORDE_HPP__

#include "Zombie.hpp"

class ZombieHorde {
    public:
        Zombie *z;
        int n;
        ZombieHorde(int n);
        ~ZombieHorde( void ) {
            delete [] z;
        }
        void announce( void ) const;
};

#endif 