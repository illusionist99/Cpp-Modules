/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:43:52 by malaoui           #+#    #+#             */
/*   Updated: 2021/05/23 14:57:29 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"


void    replace( std::string filename, std::string s1, std::string s2 ) {

	std::ifstream   readFile;
	std::ofstream   newFile;
	std::string     line;
	size_t          index;

	readFile.open (filename, std::ios::in);
	
	if ( !readFile.is_open() || !readFile.good() ) {
		std::cout << "Couldn't open The File" << std::endl;
		exit(1);
	}
	
	newFile.open (filename + ".replace", std::ios::out);
	
	if ( !newFile.is_open() || !newFile.good() ) {
		std::cout << "Couldn't Create The File" << std::endl;
		exit(1);
	}
	
	if (s1 == "") {
		std::cout << "Can't replace an empty string -_-" << std::endl;
		exit(1);
	}
	
	index = 0;

	while (std::getline(readFile, line)) {

		while ((index = line.find(s1)) != std::string::npos) {

			line.replace(index, s1.length(), s2);
		}
		newFile << line << std::endl;
	}

	readFile.close();
	newFile.close();
}
