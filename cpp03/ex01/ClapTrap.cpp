/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:04:03 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/28 15:19:01 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap( void ): _name("ClapTrap")
{
	this->_whoisit = "ClapTrap";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "First constructor called!" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const name ): _name(name)
{
	std::cout << "Constructor with parameter called!" << std::endl;
	this->_whoisit = "ClapTrap";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
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
	o << "ClapTrap: Name = " << i.getName() << std::endl;
	o << "ClapTrap: Attack Damage = " << i.getAttackD() << std::endl;
	o << "ClapTrap: Energy = " << i.getEnergy() << std::endl;
	o << "ClapTrap: Vitality = " << i.getHit() << std::endl;
	o << "ClapTrap: Who is it = " << i.getWhoIsIt() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack( const std::string& target )
{
	if (this->getEnergy() <= 0)
	{
		std::cout << "ClapTrap " << this->getName()
				  << " Doesn't have Energy Points" << std::endl;
		return;
	}
	if (this->getHit() <= 0)
	{
		std::cout << "ClapTrap "<< "There are no zombies in here!"
				  << this->getName() << " He's dead!" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->getName() << " Attacks deeply " << target
	<< " causing " << this->getAttackD() << " points of damage. "
	<< "Don't you have a heart?" << std::endl;

	this->_energyPoints--;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if(amount < 0)
	{
		std::cout << "Please, only positive numbers" << std::endl;
		return ;
	}
	if (this->getHit() < 1)
	{
		std::cout << this->getWhoIsIt() << " You definitely don't have a heart! "
		<< this->getName() << " is already dead !" << std::endl;
		return ;
	}
	else if (this->getHit() <= amount)
	{
		this->_hitPoints = 0;
		std::cout << this->getWhoIsIt() << " " << this->getName() << " died! :("
		<< std::endl;
		return;
	}
	else if (this->getHit() > amount)
	{
		this->_hitPoints--;
		std::cout << this->getWhoIsIt() << " " << this->getName()
		<< ": it's hurts!!!!!" << " Him took " << amount << " damage"
		<< std::endl;
		return;
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if(amount < 0)
	{
		std::cout << "Please, only positive numbers" << std::endl;
		return ;
	}
	if (this->getHit() < 1)
	{
		std::cout << this->getWhoIsIt() << " You are dead!" << std::endl;
		return ;
	}
	if (this->getEnergy() < 1)
	{
		std::cout << this->getWhoIsIt() << " " << this->getName()
		<< ": MY GOODNESS!!!!" << " You don't have Energy." << std::endl;
		return ;
	}
	else
	{
		this->_energyPoints = this->_energyPoints + amount;
		this->_energyPoints--;
		std::cout << this->getWhoIsIt() << " You were healed: "
				  << amount << " (sound of healed)" << std::endl;
	}
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string ClapTrap::getName( void ) const
{
	return this->_name;
}

std::string ClapTrap::getWhoIsIt( void ) const
{
	return this->_whoisit;
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
	if(power < 0)
	{
		std::cout << "Please, only positive numbers" << std::endl;
		return ;
	}
	std::cout << this->getWhoIsIt() << " " << this->getName() << " now has "
			  << power << " of attack!" << std::endl;
	this->_attackDamage = power;
	return ;
}

void	ClapTrap::setHP ( unsigned int hp)
{
	if (hp < 0)
	{
		std::cout << "Please, only positive numbers"<< std::endl;
		return ;
	}
	std::cout << this->getWhoIsIt() << " " << this->getName() << " now has "
			  << hp << " of hitPoints!";
	this->_hitPoints = hp;
	return ;
}

void	ClapTrap::setEnergy ( unsigned int vitality)
{
	if(vitality < 0)
	{
		std::cout << "Please, only positive numbers" << std::endl;
		return ;
	}
	std::cout << this->getWhoIsIt() << " "<< this->getName() << " now has "
			  << vitality << " of energy!";
	this->_energyPoints = vitality;
	return ;
}

/* ************************************************************************** */
