/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:36:35 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/04 19:57:58 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat *b1 = new Bureaucrat ("Janio Quadros", 1);
	Bureaucrat *b2 = new Bureaucrat ("Hermes Da Fonseca", 1);
	Bureaucrat *b3 = new Bureaucrat ("Nilo Peçanha", 1);
	Form *form = new PresidentialPardonForm("Tordesilhas");
	Form *form1 = new ShrubberryCreationForm("Bruxelas");
	Form *form2 = new RobotomyRequestForm ("Versalhes");

	b1->signForm(*form2);
	b1->executeForm(*form2);

	std::cout << std::endl;
	std::cout << std::endl;

	b2->signForm(*form);
	b2->executeForm(*form);

	std::cout << std::endl;
	std::cout << std::endl;
	b3->signForm(*form1);
	b3->executeForm(*form1);

	delete form;
	delete form1;
	delete form2;
	delete b1;
	delete b2;
	delete b3;
}
