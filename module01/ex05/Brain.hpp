/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:50:30 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 15:11:33 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>
#include <sstream>

class Brain {
    public:
        Brain( void ) {
            std::cout << "Constructor Called" << std::endl;
        }
        ~Brain( void ) {
            std::cout << "Destructor Called" << std::endl;
        }
        std::string identify( void ) const;
};


#endif
