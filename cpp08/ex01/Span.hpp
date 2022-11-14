/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:57:22 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/14 17:01:47 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		unsigned int const _size;
		std::vector<int>	_box;
	public:
		Span( void );
		Span (unsigned int size);
		Span (Span const & obj);
		~Span ( void );

		Span & operator=(Span const & obj);

		void addNumber(int number);
		void addALotNumbers(int from, int to, int jumping);
		int longestSpan( void );
		int shortestSpan( void);

		void getVector(int value);
};
