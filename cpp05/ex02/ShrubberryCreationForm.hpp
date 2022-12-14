/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:27:08 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/12 09:27:09 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP

# include <iostream>
# include <string>
#include <fstream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;
class Form;

class ShrubberryCreationForm : public Form
{

	public:

		ShrubberryCreationForm( void );
		ShrubberryCreationForm( std::string target);
		ShrubberryCreationForm( ShrubberryCreationForm const & src );
		~ShrubberryCreationForm( void );

		ShrubberryCreationForm &operator=( ShrubberryCreationForm const & rhs );

		void execute(Bureaucrat const & executor) const;
		void setTarget(std::string target);
		std::string getTarget ( void ) const;
};


#endif /* ****************************************** SHRUBBERRYCREATIONFORM_H */
