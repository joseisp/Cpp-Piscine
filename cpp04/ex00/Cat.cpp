#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat( void )
{
	this->_type = "Cat";
	std::cout << "Cat: Constructor called!" << std::endl;
	return ;
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat: Copy constructor called!" << std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat( void )
{
	std::cout << "Cat: Destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = this->getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound( void ) const
{
	std::cout << "Miauuuuu!!!" << std::endl;
	return ;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
