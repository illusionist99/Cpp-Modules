/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:50:41 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 11:50:42 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main( void ) {
    std::string s = "HI THIS IS BRAIN";
    std::string&  p = s;

    std::cout << s << std::endl;
    std::cout << p << std::endl;
    return (0);
}