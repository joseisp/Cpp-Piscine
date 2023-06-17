/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- <jinacio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:00:17 by jinacio-          #+#    #+#             */
/*   Updated: 2023/06/17 15:09:36 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*
	pegar número por número de uma string
	usar o try and catch na main
*/


int main(int argc, char *argv[])
{
	RPN rpn;
	std::string string_aux;
	int i = 0;
	int aux;

	try
	{
		if (argc != 2)
			throw "error... check the input";
		rpn.insert(argv[1]);
	}
	catch(const char *msg)
	{
		std::cerr << msg << std::endl;
	}
}

//1 2 * 2 / 2 * 2 4 - +
 