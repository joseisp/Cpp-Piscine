/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:59:43 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/10 20:00:28 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array
{
	private:
		T*	_array;
		unsigned int	_len;

	public:
		Array<T> ( void )
		{
			this->_array = new T[0];
			this->_len = 0;
		}
		Array<T> ( unsigned int n1)
		{
			this->_array = new T[n1];
			this->_len = n1;
		}
		Array<T>  ( Array & obj)
		{
			*this = obj;
		}
		~Array<T>  ( void )
		{
			delete [] this->_array
			return ;
		}

		T & operator[] ( unsigned int number)
		{
			if (number >= this->_len)
				throw std::exception();
			return this->_array[number]
		}

		const T & operator[] ( unsigned int number) const
		{
			if (number >= this->_len)
				throw std::exception();
			return this->_array[number]
		}

		unsigned int	size() const
		{
			return this->_len;
		}
};
