/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:14:32 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/25 15:25:15 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed (int const n1)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = n1 << this->_storeBit;
}

Fixed::Fixed (float const n2)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(n2 * (1 << this->_storeBit));
}

Fixed::Fixed (Fixed const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
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

float	Fixed::toFloat ( void ) const
{
	return ((float)this->_fixedPoint / (1<< this->_storeBit));
}

int	Fixed::toInt ( void ) const
{
	return (this->_fixedPoint >> this->_storeBit);
}

std::ostream & operator<<( std::ostream & o, Fixed const & obj)
{
	o << obj.toFloat();

	return o;
}

Fixed & Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called\n";

	if (this != &obj)
		this->setRawBits(obj.getRawBits());
	return (*this);
}
