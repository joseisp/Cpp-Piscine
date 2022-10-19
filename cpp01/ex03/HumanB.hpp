/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:12:57 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/19 19:39:36 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanB
{

	private:
		Weapon *_weapon;
		std::string _name;
	public:
		HumanB( std::string name) ;
		~HumanB( void );

		void	attack(void);
		void	setWeapon( Weapon &weapon);

};

#endif
