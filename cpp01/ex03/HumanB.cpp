/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:33:05 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 19:25:42 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name): _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB ( void )
{
	return ;
}

void	HumanB::setWeapon (Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with their "
			  << this->_weapon->getType() << std::endl;
	return ;
}
