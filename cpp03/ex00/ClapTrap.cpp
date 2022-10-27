/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:04:03 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/27 00:02:04 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

unsigned int	attackFirst = 0;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap( void ): _name("ClapTrap")
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "First constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const name ): _name(name)
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap & obj )
{
	std::cout << "copy constructor called" << std::endl;
	*this = obj;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called. Good bye!!";
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & obj )
{
	std::cout << "Copy assignment operator called" << std::endl;

	if ( this != &obj )
	{
		this->_name = obj.getName();
		this->_hitPoints = obj.getHit();
		this->_energyPoints = obj.getEnergy();
		this->_attackDamage = obj.getAttackD();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << "Name = " << i.getName();
	o << "Attack Damage = " << i.getAttackD();
	o << "Value = " << i.getAttackD();
	o << "Value = " << i.getAttackD();

	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack( const std::string& target )
{
	if (this->getEnergy() <= 0)
	{
		std::cout << getName() << "Doesn't have Energy Points" << std::endl;
		return;
	}
	if (attackFirst == 1)
	{
		std::cout << "Breath, please! one hit at a time." << std::endl;
		return ;
	}
	if (this->getHit() <= 0)
	{
		std::cout << "There are no zombies in here!"
				  << getName() << " He's dead!" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->getName() << "Attacks deeply " << target
	<< "causing " << this->getAttackD() << "points of damage. "
	<< "Don't you have a heart?" << std::endl;

	attackFirst++;
	this->_energyPoints--;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (attackFirst <= 0)
	{
		std::cout << "to take damage you need to attack!!" << std::endl;
		return ;
	}
	if (this->getHit() <= amount)
	{
		this->_hitPoints = 0;
		std::cout << this->getName() << "is dead!" << std::endl;
		return;
	}
	if (this->getHit() > amount)
	{
		this->_hitPoints--;
		std::cout << this->getName() << ": it's hurts!!!!!" << " Him take"
		<< amount << " damage" << std::endl;
		attackFirst--;
		return;
	}

}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (this->getEnergy() < 1)
	{
		std::cout << this->getName <<": MY GOODNESS!!!!"
		<< " You don't have Energy.";
		return ;
	}
	else
	{
		this->_energyPoints = this->_energyPoints + amount;
		this->_energyPoints--;
		std::cout << "You were healed: " << amount << "(sound of healed)";
	}


}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string ClapTrap::getName( void ) const
{
	return this->_name;
}

unsigned int	ClapTrap::getHit( void ) const
{
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergy( void ) const
{
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackD( void ) const
{
	return this->_attackDamage;
}

/* ************************************************************************** */
