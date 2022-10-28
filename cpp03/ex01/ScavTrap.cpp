/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:39:32 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/28 15:15:08 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap( void )
{
	std::cout << "The constructor with no parameter was called by ScavTrap"
	 		  << std::endl;
	this->_name = "ScavTrap";
	this->_whoisit = "ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

}

ScavTrap::ScavTrap( std::string name)
{
	std::cout << "The Constructor with parameter was called by ScavTrap"
			  << std::endl;
	this->_name = name;
	this->_whoisit = "ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & obj )
{
	std::cout << "The constructor copy was called by ScavTrap"<< std::endl;
	*this = obj;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called. see you soon by ScavTrap!!"
			  << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & obj )
{
	std::cout << "Copy assignment operator called by ScavTrap";
	if ( this != &obj )
	{
		this->_name = obj.getName();
		this->_hitPoints = obj.getHit();
		this->_whoisit = obj.getAttackD();

		this->_energyPoints = obj.getEnergy();
		this->_attackDamage = obj.getAttackD();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "ScavTrap: Name = " << i.getName() << std::endl;
	o << "ScavTrap: Attack Damage = " << i.getAttackD() << std::endl;
	o << "ScavTrap: Energy = " << i.getEnergy() << std::endl;
	o << "ScavTrap: Vitality = " << i.getHit() << std::endl;
	o << "ScavTrap: Who is it = " << i.getWhoIsIt() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack( const std::string& target )
{
	std::cout << std::endl;
	if (this->getEnergy() <= 0)
	{
		std::cout << this->getWhoIsIt() << " "<< this->getName()
				  << " Doesn't have Energy Points" << std::endl;
		return;
	}
	if (this->getHit() <= 0)
	{
		std::cout << this->getWhoIsIt() << " Do you bealive in ponies too?"
				  << this->getName() << " He's dead!" << std::endl;
		return ;
	}

	std::cout << this->getWhoIsIt() << " " << this->getName()
			  << " Attacks " << target
			  << " causing " << this->getAttackD() << " points of damage. "
			  << std::endl;

	this->_energyPoints--;
}

void ScavTrap::guardGate( void )
{
	if (this->getHit() < 1)
	{
		std::cout << this->getWhoIsIt() << " " << this->getName()
				  << " is dead!";
		return ;
	}
	std::cout << this->getWhoIsIt() << " " << this->getName()
	<< " is in Gate keeper mode!!" << " Why? i don't know!" << std::endl;
	return ;
}

/* ************************************************************************** */
