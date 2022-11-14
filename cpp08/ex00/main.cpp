/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:02:00 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/13 22:45:27 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	std::vector<int> _vector;
	std::deque<int> _deque;

	int list[5] = {941, 21, 42, 100};

	// insert elements from list and printing
	for (int i = 0; i < 5; i++)
	{
		_vector.push_back(list[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << _vector[i] << std::endl;
	}

	// search elements!!

	std::vector<int>::iterator carlos = easyfind(_vector, 42);
	std::cout << "Result: " << *carlos << std::endl;
	return 0;

	std::list<int> _list;


}
