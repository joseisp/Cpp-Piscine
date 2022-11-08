/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:16:29 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/08 00:08:12 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//isdigit isprint
//char int float double//

#include <iostream>
#include <string>
#include <cctype>

#include "Converting.hpp"

bool	littleRules(std::string argv)
{
	if (argv == "nanf" || argv == "-inff" || argv == "+inff")
		return true;
	if (argv == "-inf" || argv == "+inf" || argv == "nan")
		return true;

	return false;
}

int	isItChar(std::string argv)
{
	int i = 0;
	int j = 0;
	std::stringstream aux(argv);

	aux >> j;
	while (argv[i])
	{
		if (isdigit(argv[i]) != 0 || argv.length() != 1 || j > 127)
			return 0;
		i++;
	}
	return 7;
}

int	isItInt(std::string argv)
{
	int i = 0;
	std::stringstream aux(argv);
	double secAux;

	aux >> secAux;
	if (secAux < -2147483648 || secAux > 2147483647)
		return 11;
	while (argv[i])
	{
		if (!(argv[i] >= 48 && argv[i] <= 57))
		{
			if (argv[i] != 45)
				return 0;
		}
		i++;
	}
	return 1;
}

int	isItFloat(std::string argv)
{
	int i = 0;
	int point = 0;
	int f = 0;

	if (littleRules(argv))
		return 9;
	while (argv[i] != '\0')
	{
		if (isdigit(argv[i]) == 0 && argv[i] != 46 && argv[i] != 'f' )
				return 0;
		if(argv[i] == 46)
			point++;

		if ((i == argv.length() - 1) && point == 1)
		{
			if (argv[i] == 'f')
				f++;
		}
		i++;
	}
	if (point == 1 && f == 1)
		return 5;
	else
		return 0;
}

int	isItDouble(std::string argv)
{
	int i = 0;
	int point = 0;

	if (littleRules(argv))
		return 9;
	while (argv[i])
	{
		if (isdigit(argv[i]) == 0 && argv[i] != 46)
				return 0;
		if(argv[i] == 46)
			point++;
		i++;
	}
	if (point == 1 && argv.length() > 1)
		return 3;
	else
		return 0;
}

int main(int argc, char *argv[])
{
	Converting convert;
	int choose = 0;
	if ( argv[1] )
	{
		choose = isItChar( argv[1] );
		if (choose == 0)
			choose = isItInt ( argv[1] );
		if (choose == 0)
			choose = isItFloat ( argv[1] );
		if (choose == 0)
			choose = isItDouble (argv[1]);
	}

	switch(choose)
	{
		case 1:
			convert.setToInt(argv[1]);
			break;
		case 3:
			convert.setToDouble(argv[1]);
			break;
		case 5:
			convert.setToFloat(argv[1]);
			break;
		case 7:
			convert.setToChar(argv[1]);
			break;
		case 9:
		{
			convert.printRules(argv[1]);
			choose = 0;
			break;
		}
		case 11:
		{
			convert.printMaxMin(argv[1]);
			choose = 0;
			break;
		}
		default:
			choose = 999;
			convert.printImpossible();
	}
	if (choose != 0)
		convert.printInTheRow();
}
