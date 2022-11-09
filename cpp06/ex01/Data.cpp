#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data( void )
{
	this->_name = "Megatron";
	this->_age = 777;
}

Data::Data(std::string name, int age)
{
	this->_name = name;
	this->_age = age;
}

Data::Data( const Data & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data &				Data::operator=( Data const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_age = rhs.getAge();
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

uintptr_t Data::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Data::deserialize(uintptr_t raw)
{
	return	reinterpret_cast<Data*>(raw);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Data::getName( void ) const
{
	return this->_name;
}

int	Data::getAge( void ) const
{
	return this->_age;
}

/* ************************************************************************** */
