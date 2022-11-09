/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:40:31 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/09 11:37:35 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main( void )
{
	Data *obj = new Data("Kilua", 13);
	Data *deserialize;
	uintptr_t serialize = 100;

	std::cout << "Name: " << obj->getName() << "| Age: " << obj->getAge()
			  << "| Address: "<< obj << std::endl << std::endl;

	std::cout << "uintptr_t before: " <<  serialize << std::endl;

	serialize = obj->serialize(obj);

	std::cout << "uintptr_t after: " << serialize << std::endl << std::endl;

	deserialize = obj->deserialize(serialize);

	std::cout << "Name: " << deserialize->getName() << "| Age: "
			  << deserialize->getAge() << "| Address: "<< deserialize
			  << std::endl;

	delete obj;
}
