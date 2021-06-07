/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:11:50 by malaoui           #+#    #+#             */
/*   Updated: 2021/06/05 19:11:51 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Piou.hpp"

int main()
{
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
       // Piou patrick("Patrick");

        std::cout << robert << jim << joe ;//<< patrick;
        robert.polymorph(jim);
        robert.polymorph(joe);
        //robert.polymorph(patrick);
        return 0;
}