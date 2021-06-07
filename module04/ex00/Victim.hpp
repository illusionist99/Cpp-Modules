/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:11:22 by malaoui           #+#    #+#             */
/*   Updated: 2021/06/05 19:11:23 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim( std::string name );
		Victim( Victim const & src );
		~Victim( void );

		Victim &		operator=( Victim const & rhs );

		void			setName( std::string name);
		std::string 	getName( void ) const ;
		virtual void			getPolymorphed() const;
	
	protected:
		std::string _name;

};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif
