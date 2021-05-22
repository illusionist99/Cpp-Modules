/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:45:34 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/22 15:45:35 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie {

	public:
		std::string name;
		std::string type;
		void	advert( void ) const;
		void	announce( void ) const {
			std::cout << "what's dead shall never die" << std::endl;
		}
		Zombie( void ) {
			std::cout << "Constructor Called" << std::endl;
			this->name = "NULL";
			this->type = "NULL";
		}
		~Zombie( void ) {
			std::cout << "Destructor Called" << std::endl;
		}
};

#endif
