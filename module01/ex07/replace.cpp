/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:43:52 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 11:46:08 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"


void    replace(char *filename, std::string s1, std::string s2) {

    std::string     line;
    std::ifstream   readFile(filename);
    std::ofstream   newFile("FILENAME.replace");

    while (std::getline(readFile, line)) {

        if (line.find(s1) != std::string::npos) {

            newFile << line.replace(line.find(s1), s1.length(), s2) << std::endl;
        }
        else
            newFile << line << std::endl;
    }

    readFile.close();
    newFile.close();
}