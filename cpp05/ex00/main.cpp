/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:36:35 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/03 20:15:39 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *JanioQuadros;

	try
	{
		JanioQuadros = new Bureaucrat("Josisclaison", -1);
		std::cout << *JanioQuadros;
		delete JanioQuadros;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() <<std::endl;
	}

	Bureaucrat *IveteSangalo;
	try
	{
		IveteSangalo = new Bureaucrat("Ivete Sangalo", 1);
		IveteSangalo->decrementGrade();
		std::cout << *IveteSangalo;
		delete IveteSangalo;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() <<std::endl;
	}

	Bureaucrat *EricClapton;
	try
	{
		EricClapton = new Bureaucrat("Eric Clapton", 1);
		EricClapton->decrementALot(100);
		std::cout << *EricClapton;
		delete EricClapton;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() <<std::endl;
	}
	return 0;
}
