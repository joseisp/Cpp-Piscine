/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:37:02 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/04 18:32:06 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( void ): _name("Bob Dylan")
{
	this->_grade = 1;
	return ;
}

Bureaucrat::Bureaucrat (std::string const name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat ( Bureaucrat & obj)
{
	*this = obj;
	return ;
}

Bureaucrat::~Bureaucrat ( void )
{
	return ;
}

Bureaucrat &		Bureaucrat::operator=( Bureaucrat const & obj )
{

	if ( this != &obj )
	{
		const_cast<std::string&>(this->_name) = obj.getName();
		this->_grade = obj.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}

const char *Bureaucrat::GradeTooHighException::what( void )const throw()
{
	return ("Sorry about that but the grade is too high. :/");
}

const char *Bureaucrat::GradeTooLowException::what( void )const throw()
{
	return ("Sorry about that but the grade is too low. :/");
}

void	Bureaucrat::incrementGrade( void )
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::incrementALot( int number )
{
	int i = 0;

	while (i < number)
	{
		if (this->_grade - 1 < 1)
			throw GradeTooHighException();
		else
			this->_grade--;
		i++;
	}
}

void	Bureaucrat::decrementALot ( int number )
{
	int i = 0;
	while (i < number)
	{
		if (this->_grade + 1 > 150)
			throw GradeTooLowException();
		else
			this->_grade++;
		i++;
	}
}

const std::string Bureaucrat::getName( void ) const
{
	return this->_name;
}

int Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void	Bureaucrat::signForm(Form & obj)
{
	try
	{
		obj.beSigned(*this);
		std::cout << this->getName() << " signed: " << obj.getName() << std::endl;
	}
	catch (const std::exception & er)
	{
		std::cerr << this->getName() << " couldn't sign " << obj.getName()
				  << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << this->_name << " coudn't execute " << form.getName()
				  << " because " << e.what() << std::endl;
	}

}
