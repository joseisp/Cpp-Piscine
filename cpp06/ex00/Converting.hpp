/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converting.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:22:39 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/08 00:02:12 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTING_HPP
# define CONVERTING_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

class Converting
{
	private:
		std::string _aux;
		float _float;
		int _integer;
		double _double;
		char _char;
	public:

		Converting( void );
		Converting( Converting const & src );
		~Converting( void );

		Converting &		operator=( Converting const & rhs );

	//getters
	float getFloat ( void );
	int getInt ( void );
	double getDouble ( void );
	char getChar( void );

	//setters

	void setToFloat( std::string toFloat);
	void setToInt (std::string toInt);
	void setToDouble (std::string toDouble);
	void setToChar (std::string toChar);

	//prints

	void printInTheRow( void );
	void printRules( std::string rules );
	std::string prepareToPrint(std::string str, int n1);
	void printImpossible ( void );
	void printMaxMin ( std::string str );
};

std::ostream &			operator<<( std::ostream & o, Converting const & i );

#endif /* ****************************************************** CONVERTING_H */
