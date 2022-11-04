/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:19:48 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/03 22:45:46 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form ( void );
		Form (std::string const name, int const _signGra, int const _execGra);
		Form ( Form const & src );
		~Form( void );

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

		void beSigned(const Bureaucrat & obj );

	private:
		std::string const _name;
		bool	_signed;
		int const	_signGra;
		int const	_execGra;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
