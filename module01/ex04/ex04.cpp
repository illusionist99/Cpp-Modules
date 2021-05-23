/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:50:41 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 15:06:59 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main( void ) {

    std::string s = "HI THIS IS BRAIN";
    std::string   *p = &s;
    std::string&  ref = s;

    std::cout << *p << std::endl;
    std::cout << ref << std::endl;
    return (0);
}