/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:43:58 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 13:10:14 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int     main( int ac, char **av ) {

    if (ac == 4) {
        replace(av[1], av[2], av[3]);
    }
    else
        std::cout << "Wrong Number Of arguments" << std::endl;
    return (0);
}
