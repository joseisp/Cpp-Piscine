/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:00:17 by jinacio-          #+#    #+#             */
/*   Updated: 2023/06/28 20:24:17 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int argc, char *argv[])
{
	RPN rpn;
	std::string string_aux;
	
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
