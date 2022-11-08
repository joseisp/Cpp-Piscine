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
	return ;
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
	// o << "Value = " << i.getValue();
	// return o;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// getters

// std::string Converting::getAux( void )
// {
// 	return this->_aux;
// }
float Converting::getFloat ( void )
{
	return this->_float;
}

int Converting::getInt ( void )
{
	return this->_integer;
}

double Converting::getDouble ( void )
{
	return this->_double;
}

char Converting::getChar( void )
{
	return this->_char;
}

//setters

void Converting::setToFloat( std::string toFloat )
{
	std::stringstream aux(toFloat);

	aux >> this->_float;
	this->_double = static_cast<double>(this->_float);
	this->_integer= static_cast<int>(this->_float);
	if (this->_integer > 127 || this->_integer < 0)
		this->_char = 0;
	else
		this->_char = static_cast<char>(this->_float);

	return ;
}

void Converting::setToInt ( std::string toInt )
{
	std::stringstream aux(toInt);

	aux >> this->_integer;
	this->_float = static_cast<float>(this->_integer);
	this->_double = static_cast<double>(this->_integer);
	if (this->_integer > 127 || this->_integer < 0)
		this->_char = 0;
	else
		this->_char = static_cast<char>(this->_integer);
}

void Converting::setToDouble( std::string toDouble )
{
	std::stringstream aux(toDouble);

	aux >> this->_double;
	this->_float = static_cast<float>(this->_double);
	this->_integer = static_cast<int>(this->_double);
	if (this->_integer > 127 || this->_integer < 0)
		this->_char = 0;
	else
		this->_char = static_cast<char>(this->_double);
}

void	Converting::setToChar( std::string toChar )
{
	std::stringstream aux(toChar);

	aux >> this->_char;
	this->_float = static_cast<float>(this->_char);
	this->_integer = static_cast<int>(this->_char);
	this->_double= static_cast<double>(this->_char);

}

//--------PRINTS------------

std::string Converting::prepareToPrint(std::string str, int n1)
{
	if (n1 == 1)
	{
		if (str == "nan" || str == "nanf")
			return "nanf";
		if (str == "+inff" || str == "+inf")
			return "+inff";
		if (str == "-inff" || str == "-inf" )
			return "-inff";
	}
	if (n1 == 2)
	{
		if (str == "nan" || str == "nanf")
			return "nan";
		if (str == "+inff" || str == "+inf")
			return "+inf";
		if (str == "-inff" || str == "-inf" )
			return "-inf";
	}
	return "";
}

void Converting::printInTheRow( void )
{
	int i = 0;
	std::cout << std::fixed << std::setprecision(2);
	if (isprint(this->_char))
		std::cout << "char: " << "'" << this->_char << "'" <<std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;

	std::cout << "int: " << this->_integer << std::endl;

	std::cout << "float: " << this->_float << "f" << std::endl;

	std::cout << "double: " << this->_double << std::endl;
}

void Converting::printRules( std::string rules )
{
	std::string toFloat = prepareToPrint(rules, 1);
	std::string toDouble = prepareToPrint(rules, 2);
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;

	std::cout << "float: " << toFloat << std::endl;
	std::cout << "double: "<< toDouble << std::endl;

	return ;
}

void Converting::printImpossible ( void )
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "impossible" << std::endl;
	std::cout << "double: "<< "impossible" << std::endl;
	return ;
}

void Converting::printMaxMin( std::string str )
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::stringstream aux(str);

	aux >> this->_float;
	this->_double = static_cast<double>(this->_float);
	std::cout << "float: " << this->_float << std::endl;
	std::cout << "double: "<< this->_double << std::endl;

}
//char int float double

// std::cout << "Float: " << this->_float << "\n";
// std::cout << "Integer: " << this->_integer << "\n";
// std::cout << "Double: "  << this->_double << "\n";
// std::cout << "Char: " << this->_char << "\n";

/* ************************************************************************** */
