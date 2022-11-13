/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:52:33 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/13 14:02:47 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Array.hpp"

int	main(void)
{
	int len = 5;
	Array<char> c1(len);
	Array<int> c2(len);

	// allocating in arrays
	for (int i = 0; i < len ; i++)
		c1[i] = 97 + i;
	for(int i = 0 ; i < len; i++)
		c2[i] = 50 + 50 + (pow(7,i));

	// output arrays
	for (int i = 0; i < len; i++)
		std::cout << c1[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < len; i++)
		std::cout << c2[i] << " ";
	std::cout << std::endl;

	// copy constructor
	Array<char> c3(1);
	Array<char> c4 = c3;

	//operator assignment

	Array<char> c5(2);
	Array<char> c6;
	std::cout << "Length before: "<< c6.size() << std::endl;
	c6 = c5;
	std::cout << "Length after: "<< c6.size() << std::endl;


}
