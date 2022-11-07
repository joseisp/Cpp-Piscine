#include "Converting.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Converting::Converting( void )
{
	return;
}

Converting::Converting( const Converting & src )
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Converting::~Converting( void )
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Converting &				Converting::operator=( Converting const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Converting const & i )
{
	o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
