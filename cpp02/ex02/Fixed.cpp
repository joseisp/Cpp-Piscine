/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:14:32 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/26 23:48:25 by jinacio-         ###   ########.fr       */
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

// boolean operators below.

bool Fixed::operator>( Fixed const &obj) const
{
	bool ret = this->_fixedPoint > obj._fixedPoint;
	return (ret);
}

bool Fixed::operator<( Fixed const &obj) const
{
	bool ret = this->_fixedPoint < obj._fixedPoint;
	return (ret);
}

bool Fixed::operator>=( Fixed const &obj) const
{
	bool ret = this->_fixedPoint >= obj._fixedPoint;
	return (ret);
}

bool Fixed::operator<=( Fixed const &obj) const
{
	bool ret = this->_fixedPoint <= obj._fixedPoint;
	return (ret);
}

bool Fixed::operator==( Fixed const &obj) const
{
	bool ret = this->_fixedPoint == obj._fixedPoint;
	return (ret);
}

bool Fixed::operator!=( Fixed const &obj) const
{
	bool ret = this->_fixedPoint != obj._fixedPoint;
	return (ret);
}

// arithmetic operators below

Fixed Fixed::operator+ ( Fixed const &obj) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() + obj.getRawBits());
	return ret;
}

Fixed Fixed::operator- ( Fixed const &obj ) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() - obj.getRawBits());
	return ret;
}

Fixed Fixed::operator* ( Fixed const &obj ) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() * obj.getRawBits() >> this->_storeBit);
	return ret;
}

Fixed Fixed::operator/ ( Fixed const &obj ) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() / obj.getRawBits());
	return ret;
}

// increment operators below

Fixed & Fixed::operator++( void )
{
	++this->_fixedPoint;
	return *this;
}

Fixed & Fixed::operator--( void )
{
	--this->_fixedPoint;
	return *this;
}

Fixed Fixed::operator--( int )
{
	Fixed ret = *this;
	this->_fixedPoint--;
	return ret;
}

Fixed Fixed::operator++( int )
{
	Fixed ret = *this;
	this->_fixedPoint++;
	return ret;
}

// operators min and max below

Fixed & Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return obj2;
	else
		return obj1;
}

const Fixed & Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return obj2;
	else
		return obj1;
}

Fixed & Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return obj2;
	else
		return obj1;
}

const Fixed & Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return obj2;
	else
		return obj1;
}

Fixed & Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &obj)
		this->setRawBits(obj.getRawBits());
	return (*this);
}
