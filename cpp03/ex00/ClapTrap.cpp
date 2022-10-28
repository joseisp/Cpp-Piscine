/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:04:03 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/28 15:18:49 by jinacio-         ###   ########.fr       */
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
	std::cout << "First constructor called!" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const name ): _name(name)
{
	std::cout << "Constructor with parameter called!" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap & obj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called. Good bye!!" << std::endl;
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
	o << "Name = " << i.getName() << std::endl;
	o << "Attack Damage = " << i.getAttackD() << std::endl;
	o << "Value = " << i.getAttackD() << std::endl;
	o << "Value = " << i.getAttackD() << std::endl;

	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack( const std::string& target )
{
	std::cout << std::endl;
	if (this->getEnergy() <= 0)
	{
		std::cout << getName() << " Doesn't have Energy Points" << std::endl;
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

	std::cout << "ClapTrap " << this->getName() << " Attacks deeply " << target
	<< " causing " << this->getAttackD() << " points of damage. "
	<< "Don't you have a heart?" << std::endl;

	attackFirst++;
	this->_energyPoints--;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (attackFirst <= 0)
	{
		std::cout << "To take damage you need to attack!!" << std::endl;
		return ;
	}
	else if (this->getHit() < 1)
	{
		std::cout << "You definitely don't have a heart! "
		<< this->getName() << " is already dead !" << std::endl;
		std::cout << std::endl;
		attackFirst--;
		return ;
	}
	else if (this->getHit() <= amount)
	{
		this->_hitPoints = 0;
		std::cout << this->getName() << " died! :(" << std::endl;
		std::cout << std::endl;
		attackFirst--;
		return;
	}
	else if (this->getHit() > amount)
	{
		this->_hitPoints--;
		std::cout << this->getName() << ": it's hurts!!!!!" << " Him took "
		<< amount << " damage" << std::endl;
		attackFirst--;
		std::cout << std::endl;
		return;
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (this->getHit() < 1)
	{
		std::cout << "You are dead!" << std::endl;
		return ;
	}

	if (this->getEnergy() < 1)
	{
		std::cout << this->getName() <<": MY GOODNESS!!!!"
		<< " You don't have Energy." << std::endl;
		return ;
	}
	else
	{
		this->_energyPoints = this->_energyPoints + amount;
		this->_energyPoints--;
		std::cout << "You were healed: " << amount
		          << " (sound of healed)" << std::endl;
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

void	ClapTrap::setDamage ( unsigned int power)
{
	std::cout << this->getName() << " now has " << power << " of attack!";
	this->_attackDamage = power;
	std::cout << std::endl;
	return ;
}

void	ClapTrap::setHP ( unsigned int hp)
{
	std::cout << this->getName() << " now has " << hp << " of hitPoints!";
	this->_hitPoints = hp;
	std::cout << std::endl;
	return ;
}
void	ClapTrap::setEnergy ( unsigned int vitality)
{
	std::cout << this->getName() << " now has " << vitality << " of energy!";
	this->_energyPoints = vitality;
	std::cout << std::endl;
	return ;
}

/* ************************************************************************** */
