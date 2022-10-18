/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:03:04 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/18 16:18:58 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string zombieName): _name(zombieName)
{
}
Zombie::~Zombie ( void )
{
	std::cout << this->_name << " was destroying" << std::endl;
}

void	Zombie::announce ( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
