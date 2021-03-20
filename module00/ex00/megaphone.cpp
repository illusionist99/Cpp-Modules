/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:54:02 by malaoui           #+#    #+#             */
/*   Updated: 2021/03/20 10:54:00 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    upper(char **s)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[j] != NULL)
    {
        i = 0;
        while (s[j][i] != '\0')
        {
            std::cout << (char )std::toupper(s[j][i]);
            i++;
        }
        std::cout << " ";
        j++;
    }
    std::cout << std::endl;  
}
int     main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        upper(av + 1);
    return (0);
}
