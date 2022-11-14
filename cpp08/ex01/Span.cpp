/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:09:26 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/14 17:10:13 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ): _size(0)
{
	return ;
}

Span::Span (unsigned int size): _size(size)
{
	return ;
}

Span::Span (Span const & obj): _size(obj._size)
{
	*this = obj;
	return ;
}

Span::~Span ( void )
{
	return ;
}

Span & Span::operator=(Span const & obj)
{
	if (this != &obj)
	{
		for (int i = 0; (this->_box.begin() + i) < this->_box.end(); i++ )
		{
			this->_box[i] = obj._box[i];
		}
	}
	return *this;
}

void Span::addNumber(int number)
{
	int len = this->_box.size();
	if (len < this->_size)
		this->_box.push_back(number);
	else
		throw std::exception();

}
void Span::addALotNumbers(int from, int to, int jumping)
{
	int i = from;
	if ((from + jumping) > to)
		throw std::exception();
	while(i <= to)
	{
		if (this->_size < this->_box.size())
		{
			std::cout << "Size Limit Reached";
			break;
		}
		this->_box.push_back(i);
		i = i + jumping;
	}
}

int Span::longestSpan( void )
{
	if (this->_box.size() < 2)
	{
		throw std::exception();
	}
	return (*std::max_element(this->_box.begin(), this->_box.end()) -
			*std::min_element(this->_box.begin(), this->_box.end()));
}

int Span::shortestSpan( void )
{
	std::vector<int>	box = this->_box;

	if (this->_box.size() < 2)
	{
		throw std::exception();
	}
	int ret = 2147483647;
	std::sort (box.begin(), box.end());
	for (int i = 0; i < box.size(); i++)
	{
		if ((i + 1) != box.size())
		{
			if (box[i + 1] - box[i] < ret)
				ret = box[i + 1] - box[i];
		}
	}
	return ret;
}

void Span::getVector(int value)
{
	std::cout << this->_box[value];
}
