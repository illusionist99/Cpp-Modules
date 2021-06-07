/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Piou.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:11:35 by malaoui           #+#    #+#             */
/*   Updated: 2021/06/05 19:11:36 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIOU_HPP
# define PIOU_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Piou : public Victim
{

	public:

		Piou( std::string name );
		Piou( Piou const & src );
		~Piou( void );

		void			getPolymorphed() const;
		Piou &		operator=( Piou const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Piou const & i );

#endif /* ************************************************************ PIOU_H */