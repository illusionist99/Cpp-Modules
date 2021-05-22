/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:45:15 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/22 15:45:16 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PONY_HPP__
# define __PONY_HPP__

#include <iostream>

class Pony {

	public:
		std::string		name;
		int				age;
		int 			height;

		Pony( void );
		~Pony( void );
		static Pony		ponyOnTheStack( void );
		static Pony		*ponyOnTheHeap( void );
};

#endif
