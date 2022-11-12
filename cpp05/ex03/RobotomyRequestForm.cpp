/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:25:14 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/12 09:25:15 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm( void ):
Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget("Baianinho de Maua");
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string  target):
Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
	return ;
}


RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ):
Form(src.getName(), src.getSignGra(), src.getExecGra())
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int i = time(0);
	srand(i);
	if (this->getSigned() == false)
	{
		throw WeNeedTheSign();
	}
	else if (executor.getGrade() <=  this->getExecGra())
	{
		std::cout << "bruuuummmmmmmmmm" << std::endl;
		if (rand() % 100 > 50)
		{
			std::cout << this->getTarget()
				  << " has been robotomized successfully!" << std::endl;
		}
		else
		{
			std::cout << this->getTarget()
					  << ": the robotomy failed." << std::endl;
		}
	}
	else
	{
		throw GradeTooLowException();
	}
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void RobotomyRequestForm::setTarget(std::string target)
{
	this->_target = target;
	return ;
}

std::string RobotomyRequestForm::getTarget( void ) const
{
	return this->_target;
}

/* ************************************************************************** */
