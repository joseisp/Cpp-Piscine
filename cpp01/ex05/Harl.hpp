/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:02:27 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/21 19:12:52 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
	private:
		void	debug ( void );
		void	info ( void );
		void	warning ( void );
		void	error ( void );

	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );

};
