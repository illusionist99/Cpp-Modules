/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:45:10 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/22 15:45:11 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main( void ) {

	Pony stack = Pony::ponyOnTheStack();
	Pony *heap = Pony::ponyOnTheHeap();

	std::cout << stack.name << std::endl;	
	std::cout << heap->name << std::endl;	
	delete(heap);
	return (0);
}
