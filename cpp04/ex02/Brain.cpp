/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:01:55 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 15:16:12 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain( void )
{
	std::cout << "Constructor called by ClassBrain" << std::endl;
	return ;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Constructor copy called by ClassBrain" << std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain( void )
{
	std::cout << "Destructor called by ClassBrain" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		int i = 0;
		while ( i < 100)
		{
			this->_ideas[i] = rhs.getIdeas(i);
			i++;
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	int n1;
	while (n1 < 100)
	{
		o << i.getIdeas(n1) << std::endl;
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Brain::setIdeas(std::string idea)
{
	int len = idea.length();
	if (len >100)
	{
		std::cout << "Error: there are more than 100 characters" << std::endl;
		return ;
	}
	int i = 0;
	while (i++ < len)
	{
		this->_ideas[i] = idea[i];
	}
}
std::string const Brain::getIdeas ( int pos ) const
{
	return this->_ideas[pos];
}

/* ************************************************************************** */
