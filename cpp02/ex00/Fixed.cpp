/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:14:32 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/24 19:59:04 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed (Fixed const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Fixed & Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called\n";

	if (this != &obj)
		this->setRawBits(obj.getRawBits());
	return (*this);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void	Fixed::setRawBits ( int const raw)
{
	this->_fixedPoint = raw;
}
