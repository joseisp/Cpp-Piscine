/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:56:14 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/19 19:09:51 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon ( std::string type )
{
	this->_type = type;
	return ;
}

Weapon::~Weapon ( void )
{
	return ;
}

void Weapon::setType (std::string newType)
{
	this->_type = newType;
}

const std::string &Weapon::getType ( void )
{
	return this->_type;
}
