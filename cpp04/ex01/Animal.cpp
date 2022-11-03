/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:27:14 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 15:03:15 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal( void )
{
	this->_type = "Animal";
	std::cout << this->getType() <<": Constructor Called by Class Animal!"
			  << std::endl;
	return ;
}

Animal::Animal (std::string type)
{
	this->_type = type;
	std::cout << this->getType()
			  << ": Constructor with parameter called by Class Animal!"
			  << std::endl;
}

Animal::Animal( Animal & src )
{
	std::cout << this->getType() << ": Copy constructor called by Class Animal!"
			  << std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal: Destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound( void ) const
{
	std::cout << "ROW ROW!! (Does that sound like the animal?)" << std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Animal::setType ( std::string type)
{
	this->_type = type;
	return ;
}

std::string const Animal::getType( void ) const
{
	return this->_type;
}

/* ************************************************************************** */
