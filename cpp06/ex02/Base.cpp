/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:02:37 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/09 18:09:49 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base	( void )
{
	return ;
}

Base*	generate(void)
{
	srand((unsigned) time(NULL));

	switch (1 + rand() % 3)
	{
		case 1:
			return new A();
			break;
		case 2:
			return new B();
			break;
		case 3:
			return new C();
			break;
		default:
			std::cout << "Unexpected error to generate number. :(" << std::endl;
	}
	return new A();
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error... " << std::endl;

	return ;
}

void	identify(Base& p)
{
	try
	{
		A a = dynamic_cast <A&>(p);
		std::cout << "A" << std::endl;
	}
	catch ( const std::exception &e0){}
	try
	{
		B b = dynamic_cast <B&>(p);
		std::cout << "B" << std::endl;
	}
	catch ( const std::exception &e1){}
	try
	{
		C c = dynamic_cast <C&>(p);
		std::cout << "C" << std::endl;
	}
	catch ( const std::exception &e2){}
}
