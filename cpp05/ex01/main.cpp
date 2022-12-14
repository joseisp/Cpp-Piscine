/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:36:35 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/11 20:59:42 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *JanioQuadros;
	Form *form;

	try
	{
		JanioQuadros = new Bureaucrat("Kilua", 15);
		form = new Form ("F1", 10, 10);
		JanioQuadros->signForm(*form);
		std::cout << *form;
		delete form;
		delete JanioQuadros;
	}
	catch (std::exception& er)
	{
		std::cerr << er.what() << std::endl;
	}

	try
	{
		JanioQuadros = new Bureaucrat("Roberto", 1);
		form = new Form ("F2", 5, 3);
		JanioQuadros->signForm(*form);
		std::cout << *form;
		delete form;
		delete JanioQuadros;
	}
	catch (std::exception& er)
	{
		std::cerr << er.what() << std::endl;
	}


	return 0;
}
