/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:10:00 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/04 19:47:55 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm( void ) : Form()
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ):
Form (src.getName(), src.getSignGra(), src.getExecGra())
{
	*this = src;
	return ;
}

/*
** --------------------------------DESTRUCTOR--------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}


/*
** ---------------------------------OVERLOAD---------------------------------
*/

PresidentialPardonForm &
PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
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
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
	{
		throw WeNeedTheSign();
	}
	else if (executor.getGrade() <=  this->getExecGra())
	{
		std::cout << this->getTarget()
		          << " has been pardoned by Zaphod Beeblebrox." << std::endl;
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

void PresidentialPardonForm::setTarget(std::string target)
{
	this->_target = target;
	return ;
}

std::string PresidentialPardonForm::getTarget( void ) const
{
	return this->_target;
}


/* ************************************************************************** */
