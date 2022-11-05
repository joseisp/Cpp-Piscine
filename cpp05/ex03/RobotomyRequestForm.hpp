/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:32:31 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/04 19:44:04 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include <cstdlib>
#include <ctime>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm( void );

		RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );

		void execute(Bureaucrat const & executor) const;
		void setTarget(std::string target);
		std::string getTarget ( void ) const;
};


#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */
