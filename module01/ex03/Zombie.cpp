/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:45:32 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/22 15:45:33 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::advert( void ) const {
    std::cout << "<" << this->name << " (" << this->type << ") > Braiiiiiiinnnssss ..." << std::endl;
}
