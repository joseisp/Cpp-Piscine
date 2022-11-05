#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern( void )
{
	std::cout << "Constructor called. Call makeForm to use better" << std::endl;
	return ;
}

Intern::Intern( void )
{
	return ;
}

Intern::Intern( const Intern & src )
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern( void )
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

Form *Intern::makeForm(std::string nForm, std::string nTarget)
{
	std::string list[3] = {"PRESIDENTIAL", "ROBOTO", "SHRUBBERRY"};
	int i = 0;
	Form *ret;

	while (list[i].compare(nForm) != 0 && i < 5)
	{
		i++;
	}
	switch(i)
	{
		case 0:
		{
			Form *form = new PresidentialPardonForm("Tordesilhas");
			std::cout << "Intern creates" << " Presidential Pardon Form"
					  << std::endl;
			return form;
		}
		case 1:
		{
			Form *form2 = new RobotomyRequestForm ("Versalhes");
			std::cout << "Intern creates" << " Roboto Request Form"
					  << std::endl;
			return form2;
		}
		case 2:
		{
			Form *form1 = new ShrubberryCreationForm("Bruxelas");
			std::cout << "Intern creates" << " Shurubbery Creation Form"
					  << std::endl;
			return form1;
		}
		default:
		{
			std::cout << "" << std::endl;
			return ret;
		}
	}
	return ret;
}

	// Form *form = new PresidentialPardonForm("Tordesilhas");
	// Form *form1 = new ShrubberryCreationForm("Bruxelas");
	// Form *form2 = new RobotomyRequestForm ("Versalhes");
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
