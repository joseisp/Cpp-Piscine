/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:00:17 by jinacio-          #+#    #+#             */
/*   Updated: 2023/06/14 20:50:55 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*
	pegar número por número de uma string
*/


int main(int argc, char *argv[])
{
	RPN rpn;
	std::string string_aux;
	int i = 0;
	int aux;

	if(argc == 2)
	{
		rpn.insert(argv[1]);
	}
	else
		std::cout << "Get out! " << std::endl;
	//calculing(rpn);
}
