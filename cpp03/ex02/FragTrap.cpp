/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:27:51 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/11 12:27:53 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap( void )
{
	std::cout << "First constructor was called by FragTrap" << std::endl;
	this->_name = "FragTrap";
	this->_whoisit = "FragTrap";
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap ( std::string name)
{
	std::cout << "Constructor with parameter was called by FragTrap"
			  << std::endl;
	this->_name = name;
	this->_whoisit = "FragTrap";
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "Copy constructor by FragTrap" << std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor was called by FragTrap" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & obj )
{
	std::cout << "Copy assignment operator called by FragTrap" << std::endl;
	if ( this != &obj )
	{
		this->_name = obj.getName();
		this->_attackDamage = obj.getAttackD();
		this->_hitPoints = obj.getHit();
		this->_energyPoints = obj.getEnergy();
		this->_whoisit = obj.getWhoIsIt();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	o << "FragTrap: Name = " << i.getName() << std::endl;
	o << "FragTrap: Attack Damage = " << i.getAttackD() << std::endl;
	o << "FragTrap: Energy = " << i.getEnergy() << std::endl;
	o << "FragTrap: Vitality = " << i.getHit() << std::endl;
	o << "FragTrap: Who is it = " << i.getWhoIsIt() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::highFivesGuys(void)
{
	if (this->getHit() > 0)
	{
		std::cout << "FragTrap " << this->getName()
				  << " request high five!!! ✋" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->getName()
				  << "is dead! can not request high five! ☠️" << std::endl;
}

/* ************************************************************************** */
