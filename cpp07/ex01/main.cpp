/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:45:27 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/12 17:57:40 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int i = 0;

void	sum(int & n1)
{
	i = i + n1;
}

void	insert (std::string & str)
{
	str = str + "Silva";
}

void	letter (char & chr)
{
	chr = chr + 1;
}

int main( void )
{
	int ar[10] = {0,1,2,3,4,5,6,7,8,9};

	iter(ar, 10, sum);

	std::cout << "Sum array: " << i << std::endl;

	std::string ar2[5] = {"Neide ", "Jorge ", "Luzia ", "Corn ", "Cigano "};

	std::cout << "Before Iter: " << std::endl << std::endl;
	for (int j = 0; j < 5; j++)
	{
		std::cout << ar2[j] << std::endl;;
	}

	iter(ar2, 5, insert);

	std::cout << "After Itter:"<< std::endl << std::endl;
	for (int j = 0; j < 5; j++)
	{
		std::cout << ar2[j] << std::endl;;
	}

	char ar3[3] = {'B', 'C'};

	iter (ar3, 2, letter);

	std::cout << "C: " << ar3[0] << std::endl;
	std::cout << "D: " << ar3[1] << std::endl;
}

