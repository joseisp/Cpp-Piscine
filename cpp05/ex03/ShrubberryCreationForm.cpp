/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:25:21 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/12 09:25:23 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberryCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberryCreationForm::ShrubberryCreationForm( void ):
Form ("ShrubberryCreationForm", 145, 137)
{
	this->setTarget("Don Ramon");
	return ;
}

ShrubberryCreationForm::ShrubberryCreationForm( std::string target):
Form ("ShrubberryCreationForm", 145, 137)
{
	this->setTarget(target);
	return ;
}


ShrubberryCreationForm::ShrubberryCreationForm( const ShrubberryCreationForm & src ):
Form (src.getName(), src.getSignGra(), src.getExecGra())
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberryCreationForm::~ShrubberryCreationForm()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberryCreationForm & ShrubberryCreationForm::operator=( ShrubberryCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberryCreationForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberryCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
	{
		throw WeNeedTheSign();
	}
	else if (executor.getGrade() <=  this->getExecGra())
	{
		std::ofstream ofs (this->_target + "_shrubberry");
		ofs <<"   ,,,.   ,@@@@@@/@@,  .oo8888o."<< std::endl;
		ofs<<",&&%&%&&%,@@@@@/@@@@@@,8888\\88/8o" <<std::endl;
		ofs <<",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		ofs <<"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		ofs << "%&&%/ %&&%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		ofs << " `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		ofs << "     |o|        | |         | |" << std::endl;
		ofs<<"     |.|        | |         | |" << std::endl;
		ofs << "    \\/.|__|/_/_/  ,\\_//__||/.  \\_//__/_" << std::endl;
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

void ShrubberryCreationForm::setTarget(std::string target)
{
	this->_target = target;
	return ;
}

std::string ShrubberryCreationForm::getTarget ( void ) const
{
	return this->_target;
}

/* ************************************************************************** */
