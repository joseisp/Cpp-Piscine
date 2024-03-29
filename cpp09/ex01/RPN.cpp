/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- <jinacio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:59:56 by jinacio-          #+#    #+#             */
/*   Updated: 2023/06/17 15:27:49 by jinacio-         ###   ########.fr       */
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

int RPN::calculing(char operators)
{
	int n1, n2;

	if (this->numbers.size() < 2)
		return 0;

	n2 = this->numbers.top();
	this->numbers.pop();
	n1 = this->numbers.top();
	this->numbers.pop();

	if (operators == '+')
	{
		this->numbers.push(n1 + n2);
	}
	else if(operators == '-')
	{
		this->numbers.push(n1 - n2);
	}
	else if (operators == '*')
	{
		this->numbers.push(n1 * n2);	
	}
	else if (operators == '/')
	{
		this->numbers.push(n1 / n2);
	}
	
	return 1;
}

void RPN::insert(char *str)
{
	int i = 0;
	int aux = 1;

	while (str[i] != '\0' && aux != 0)
	{
		if(isdigit(str[i]) && isdigit(str[i + 1]))
		{
			std::cout << "Error..." << std::endl;
			break;
		}
		else if (isdigit(str[i]))
		{
			this->numbers.push(str[i] - '0');
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
			aux = calculing(str[i]);
		
		i++;
	}
	if (aux == 0)
		std::cout << "Error... invalid input " << std::endl;
	else
		std::cout << this->numbers.top() << std::endl;
}
