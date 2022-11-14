/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:56:14 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/14 17:15:49 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "SP Test By PDF 42" << std::endl;

	Span sp2 = Span(20);

	try
	{
		sp2.addALotNumbers(1, 20, 1);
		std::cout << "SP2 Get an element in Vector: ";
		sp2.getVector(19);
		std::cout << "\n";
		std::cout << "SP2 The shortest Number: " << sp2.shortestSpan()
				  << std::endl;
		std::cout << "SP2 The Longest Number: " << sp2.longestSpan()
				  << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "SP2 the jump is greater than the \"T\"" << std::endl;
	}

	Span sp3 = Span(20000);

	try
	{
		sp3.addALotNumbers(1, 20000, 1);
		std::cout << "SP3 Get an element in Vector: ";
		sp3.getVector(19);
		std::cout << "\n";
		std::cout << "SP3 The shortest Number: " << sp3.shortestSpan()
				  << std::endl;
		std::cout << "SP3 The Longest Number: " << sp3.longestSpan()
				  << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "SP3 the jump is greater than the \"T\"" << std::endl;
	}

	return 0;
}
