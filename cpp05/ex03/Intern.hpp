#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include "PresidentialPardonForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{

	public:

		Intern( void );
		Intern ( void );
		Intern( Intern const & src );
		~Intern( void );

		Form* makeForm(std::string nForm, std::string nTarget);

		Intern &		operator=( Intern const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */
