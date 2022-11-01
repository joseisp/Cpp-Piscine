#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "Dog: Constructor called!" << std::endl;
	return ;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog: Constructor copy called!" << std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog: Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = this->getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "Name = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound( void ) const
{
	std::cout << "AU AU AU AU!!!!!" << std::endl;
	return ;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
