/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:26:34 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/01 15:37:11 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main( void )
{
	AAnimal *animais[10];

	int i = 0;
	int j = 0;
	while (i < 5)
	{
		animais[i] = new Dog();
		i++;
	}
	std::cout << std::endl;
	std::cout << "constructor's DOG!" << std::endl;
	std::cout << std::endl;
	while (i < 10)
	{
		animais[i] = new Cat();
		i++;
	}
	std::cout << std::endl;
	std::cout << "constructor's CAT!" << std::endl;
	std::cout << std::endl;

	while (j < 10)
	{
		delete animais[j];
		j++;
		if (j == 5)
		{
			std::cout << "destructor's DOG" << std::endl;
			std::cout << std::endl;
		}
	}
	std::cout << "destructor's CAT" << std::endl;
	return 0;
}
