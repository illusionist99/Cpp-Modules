/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:50:27 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 15:11:19 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


std::string             Brain::identify( void ) const {

    std::stringstream   ss;
    ss << this;  
    return ss.str();
}
