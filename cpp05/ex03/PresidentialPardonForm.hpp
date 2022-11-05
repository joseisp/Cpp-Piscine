#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
//# include "Bureaucrat.hpp"
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
