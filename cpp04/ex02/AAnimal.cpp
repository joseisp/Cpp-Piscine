/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:27:14 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 15:25:40 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal( void )
{
	this->_type = "AAnimal";
	std::cout << this->getType() <<": Constructor Called by Class AAnimal!"
			  << std::endl;
	return ;
}

AAnimal::AAnimal (std::string type)
{
	this->_type = type;
	std::cout << this->getType()
			  << ": Constructor with parameter called by Class AAnimal!"
			  << std::endl;
}

AAnimal::AAnimal( AAnimal & src )
{
	std::cout << this->getType() << ": Copy constructor called by Class AAnimal!"
			  << std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: Destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	AAnimal::makeSound( void ) const
{
	std::cout << "ROW ROW!! (Does that sound like the AAnimal?)" << std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void AAnimal::setType ( std::string type)
{
	this->_type = type;
	return ;
}

std::string const AAnimal::getType( void ) const
{
	return this->_type;
}

/* ************************************************************************** */
