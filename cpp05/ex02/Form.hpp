/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:19:48 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/04 18:27:51 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EX02_FORM_HPP
# define EX02_FORM_HPP

# include <iostream>
# include <string>
#include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form ( void );
		Form (std::string const name, int const _signGra, int const _execGra);
		Form ( Form const & src );
		virtual ~Form( void );

		Form &		operator=( Form const & rhs );

		const std::string getName( void ) const;
		bool	getSigned( void ) const;
		int getSignGra( void ) const;
		int getExecGra( void ) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what( void ) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what( void ) const throw();
		};
		class WeNeedTheSign : public std::exception
		{
			public:
				const char* what( void ) const throw();
		};

		virtual void execute(Bureaucrat const & executor) const = 0;
		void beSigned(Bureaucrat const & obj );

	protected:
		std::string _target;

	private:
		std::string _name;
		bool	_signed;
		int const	_signGra;
		int const	_execGra;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
