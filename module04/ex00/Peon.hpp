/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:11:39 by malaoui           #+#    #+#             */
/*   Updated: 2021/06/05 19:11:40 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{

	public:

		Peon( std::string name );
		Peon( Peon const & src );
		~Peon( void );

		void			getPolymorphed() const;
		Peon &		operator=( Peon const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Peon const & i );

#endif /* ************************************************************ PEON_H */