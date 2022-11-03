/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:18:02 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 19:23:27 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	phraZ = "HI THIS IS BRAIN";
	std::string	*stringPTR = &phraZ;
	std::string	&stringREF = phraZ;

	std::cout << "String - Memory Address: " << &phraZ << std::endl;
	std::cout << "StringPTR - Memory Address: " << stringPTR << std::endl;
	std::cout << "StringREF - Memory Address: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "String - Value: " << phraZ << std::endl;
	std::cout << "StringPTR - Value " << *stringPTR << std::endl;
	std:: cout << "stringREF - Value: " << stringREF << std::endl;
}
