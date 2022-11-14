/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:02:00 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/14 14:04:29 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	//--------CONTAINER VECTOR---------

	std::vector<int> _vector;

	int list_vector[5] = {941, 21, 42, 100};

	// insert elements from list and printing

	for (int i = 0; i < 4; i++)
	{
		_vector.push_back(list_vector[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Elements Vector: "<< _vector[i] << std::endl;
	}

	// search elements

	std::vector<int>::iterator receive = easyfind(_vector, 42);
	std::cout << "Result: " << *receive << std::endl;

	// remove in the middle

	remove(_vector.begin(), _vector.end(), 42);

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Elements Vector Post Removed: "<< _vector[i] << std::endl;
	}

	//--------CONTAINER LIST---------

	std::list<int> _list;

	int list_list[5] = {1, 2, 33, 66};

	// insert elements from list and printing

	for (int i = 0; i < 4; i++)
	{
		_list.push_front(list_list[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		auto it1 = std::next(_list.begin(), i);
		std::cout << "Elements List:" << *it1 << std::endl;
	}

	// Search element

	std::list<int>::iterator receive2 = easyfind(_list, 66);
	std::cout << "Result: " << *receive2 << std::endl;

	//Removing and printing

	_list.remove(66);

	for (int i = 0; i < 3; i++)
	{
		auto it1 = std::next(_list.begin(), i);
		std::cout << "Elements List Post Removed:" << *it1 << std::endl;
	}

	//--------CONTAINER VECTOR---------

	std::deque<int> _deque;

	int list_deque[5] = {78, 94, 2, 45};

	// inserting and printing

	for (int i = 0; i < 4; i++)
	{
		_deque.push_back(list_deque[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Elements deque: " << _deque[i] << std::endl;
	}

	// search element

	std::deque<int>::iterator receive3 = easyfind(_deque, 45);
	std::cout << "Result: " << *receive3 << std::endl;

	// removing and printing

	std::deque<int>::iterator it;

	it = _deque.end();
	_deque.erase(it);

	for (int i = 0; i < 3; i++)
	{
		auto it1 = std::next(_deque.begin(), i);
		std::cout << "Elements Vector Post Removed:" << *it1 << std::endl;
	}

	return 0;
}
