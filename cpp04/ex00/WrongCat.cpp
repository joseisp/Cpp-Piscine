/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:11:53 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/31 21:39:21 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat( void )
{
	this->_type = "WrongCat";
	std::cout << "WrongCat: Constructor called!" << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "WrongCat: Constructor copy called ";
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat: Destructor called!" << std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound ( void ) const
{
	std::cout << "WrongCat: Grow grow grow!!! 😏😏" << std::endl;
	return ;
}

/* ************************************************************************** */
