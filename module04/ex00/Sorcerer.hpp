/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:11:30 by malaoui           #+#    #+#             */
/*   Updated: 2021/06/05 19:11:31 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

	public:

		Sorcerer( std::string name, std::string title);
		Sorcerer( Sorcerer const & src );
		~Sorcerer( void );

		Sorcerer &		operator=( Sorcerer const & rhs );

		std::string 	getName( void ) const ;
		std::string 	getTitle( void ) const ;

		void			setTitle( std::string title );
		void			setName( std::string name );
		void			polymorph(Victim const &) const;
	private:

		std::string _name;
		std::string _title;
};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif
