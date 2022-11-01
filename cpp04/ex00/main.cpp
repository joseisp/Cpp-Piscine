/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:26:34 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/31 21:44:16 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* n1 = new WrongAnimal();
	const WrongAnimal* n2 = new WrongCat();
	const WrongCat* n3 = new WrongCat();

	std::cout << std::endl;

	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << i->getType() << ": ";
	i->makeSound();
	std::cout << meta->getType() << ": ";
	meta->makeSound();

	std::cout << std::endl;

	std::cout << n1->getType() << ": ";
	n1->makeSound();
	std::cout << n2->getType() << ": ";
	n2->makeSound();
	std::cout << n3->getType() << ": ";
	n3->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	delete n1;
	delete n2;
	delete n3;

	return 0;
}
