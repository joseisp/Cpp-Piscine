/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:11:43 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/31 21:39:42 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal( void )
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal: Constructor called!" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal ( std::string name )
{
	this->_type = name;
	std::cout << "WrongAnimal: Constructor with parameter" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal: Constructor copy called!" << std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal: Destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound ( void ) const
{
	std::cout << "Biiiiiiiiirl!!! 😏😏" << std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void WrongAnimal::setType ( std::string type)
{
	this->_type = type;
	return ;
}

std::string const WrongAnimal::getType( void ) const
{
	return this->_type;
}

/* ************************************************************************** */
