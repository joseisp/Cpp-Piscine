/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:02:59 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/18 16:03:39 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(std::string zombieName);
		~Zombie( void );

		void	announce ( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
