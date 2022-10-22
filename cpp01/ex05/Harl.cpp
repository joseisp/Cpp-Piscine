/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:02:25 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/21 20:49:34 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl ( void )
{
	return;
}

Harl::~Harl ( void )
{
	return;
}

void Harl::debug ( void )
{
	std::cout << "I love having extra bacon for my"
	<< " 7XL-double-cheese-triple-pickle-specialketchup"
	<< " burger. I really do!" << std::endl;
}

void Harl::info ( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< " You didn't putenough bacon in my burger!"
	<< " If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning ( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< " I've been coming for years whereas"
	<< " you started working here since last month." << std::endl;
}

void Harl::error ( void )
{
	std::cout << "This is unacceptable! "
	<< "I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string	list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Harl::*furious[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;

	while (list[i].compare(level) != 0 && i < 6)
	{
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*furious[0])();
			break;
		case 1:
			(this->*furious[1])();
			break;
		case 2:
			(this->*furious[2])();
			break;
		case 3:
			(this->*furious[3])();
			break;
		default:
			std::cout << "Sorry, verify the input!" << std::endl;
	}

}
