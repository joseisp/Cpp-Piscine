/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:14:31 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/24 20:01:25 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_storeBit = 8;

	public:
		Fixed( void );
		Fixed(Fixed const &obj);
		Fixed &	operator=( Fixed const & obj );
		~Fixed( void );

		int getRawBits( void ) const;
		void setRawBits( int const raw );

};


#endif
