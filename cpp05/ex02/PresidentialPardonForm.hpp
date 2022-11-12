/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:26:22 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/12 09:26:28 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm( void );

		PresidentialPardonForm &operator=( PresidentialPardonForm const & rhs );

		void execute(Bureaucrat const & executor) const;
		void setTarget(std::string target);
		std::string getTarget( void ) const;
};


#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
