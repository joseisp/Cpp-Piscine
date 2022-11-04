/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:38:32 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/03 23:06:54 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form ( void ): _name("Bob Marley"), _signGra(5), _execGra(5)
{
	return ;
}

Form::Form (std::string const name, int const signGra, int const execGra):
_name(name), _signGra(signGra), _execGra(execGra)
{
	return ;
}

Form::Form ( Form const & src): _name (""), _signed(false), _execGra(1),
_signGra(1)
{
	*this = src;
	return ;
}

Form::~Form ( void )
{
	return ;
}

Form &		Form::operator=( Form const & obj )
{
	if ( this != &obj )
	{
		this->_signed = obj._signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "The biggest Form: " << i.getName()
	<< " status signed: " << i.getSigned() << " Grade to sign: "
	<< i.getSignGra() << " Grade to exec: " << i.getExecGra() << std::endl;
	return o;
}

const char *Form::GradeTooHighException::what( void )const throw()
{
	return ("Sorry about that but the grade is to sign too high. :/");
}

const char *Form::GradeTooLowException::what( void )const throw()
{
	return ("Sorry about that but the grade to sign is too low. :/");
}

void Form::beSigned(const Bureaucrat & obj )
{
	if (obj.getGrade() <= this->getSignGra())
		this->_signed = true;
	else
		throw GradeTooHighException();

}

const std::string Form::getName( void ) const
{
	return this->_name;
}

bool	Form::getSigned( void ) const
{
	return this->_signed;
}

int Form::getSignGra( void ) const
{
	return this->_signGra;
}

int Form::getExecGra( void ) const
{
	return this->_execGra;
}

