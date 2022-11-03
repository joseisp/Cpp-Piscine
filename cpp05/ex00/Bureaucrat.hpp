/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:37:00 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/03 19:28:54 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;

	public:

		Bureaucrat ( void );
		Bureaucrat ( std::string name, int grade);
		Bureaucrat ( Bureaucrat & obj);
		~Bureaucrat ( void );

		Bureaucrat & operator=( Bureaucrat const & obj);

		const std::string getName( void ) const;
		int	getGrade( void ) const;

		void	incrementGrade( void );
		void	decrementGrade( void );
		void	incrementALot (int number);
		void	decrementALot (int number);

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
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif
