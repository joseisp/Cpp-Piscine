/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:16:29 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/07 01:17:52 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//isdigit isprint
//char int float double//

#include <iostream>
#include <string>
#include <cctype>

int	isItChar(std::string argv)
{
	int i = 0;

	while (argv[i])
	{
		if (isdigit(argv[i]) != 0 || argv.length() != 1)
			return 0;
		i++;
	}
	return 7;
}

int	isItInt(std::string argv)
{
	int i = 0;

	while (argv[i])
	{
		if (!(argv[i] >= 48 && argv[i] <= 57))
			return 0;
		i++;
	}
	return 1;
}

int	isItFloat(std::string argv)
{
	int i = 0;
	int point = 0;
	int f = 0;

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

void	convertToInt(std::string argv)
{
	int i = std::stoi(argv);

	if (isprint(i))
		std::cout << i << std::endl;
	else
		std::cout << "it's not printable" << std::endl;
	std::cout << "Entrou cá!" << std::endl;
}

int main(int argc, char *argv[])
{
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

	// switch(choose)
	// {
	// 	case 1:
	// 		convertToInt(argv[1]);
	// }
	std::cout << choose << std::endl;
}
