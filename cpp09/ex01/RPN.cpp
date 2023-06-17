/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:59:56 by jinacio-          #+#    #+#             */
/*   Updated: 2023/06/14 20:55:36 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN (RPN const &cpy)
{
	*this = cpy;
}

RPN & RPN::operator=(RPN const &cpy)
{
	if(this == &cpy)
		return *this;
	this->numbers = cpy.numbers;
	return *this;
}

void RPN::insert(char *str)
{
	int i = 0;

	while (i != 10)
	{

	}
}
