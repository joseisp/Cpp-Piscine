/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:14:31 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/25 15:12:33 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_storeBit = 8;

	public:
		Fixed ( void );
		Fixed ( int const n1 );
		Fixed ( float const n2);
		Fixed ( Fixed const &obj);
		~Fixed ( void );

		bool	operator>( Fixed const &obj ) const;
		bool	operator<( Fixed const &obj ) const;
		bool	operator>=( Fixed const &obj ) const;
		bool	operator<= ( Fixed const &obj ) const;
		bool	operator== (Fixed const &obj ) const;
		bool	operator!= (Fixed const &obj ) const;

		Fixed operator+ ( Fixed const &obj ) const;
		Fixed operator- ( Fixed const &obj ) const;
		Fixed operator* ( Fixed const &obj ) const;
		Fixed operator/ ( Fixed const &obj ) const;

		Fixed & operator++ ( void );
		Fixed operator++ ( int );
		Fixed & operator-- ( void );
		Fixed operator-- ( int );

		static Fixed &min(Fixed &obj1, Fixed &obj2);
		static Fixed const &min ( Fixed const &obj1, Fixed const &obj2);
		static Fixed &max(Fixed &obj1, Fixed &obj2);
		static Fixed const &max ( Fixed const &obj1, Fixed const &obj2);

		Fixed &	operator=( Fixed const & obj );
		float toFloat ( void ) const;
		int toInt ( void ) const;
		int getRawBits ( void ) const;
		void setRawBits ( int const raw );

};

std::ostream &	operator<<( std::ostream & o, Fixed const & obj );

#endif
