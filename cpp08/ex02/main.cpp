/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:03:10 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/14 18:15:11 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	std::cout << "Tests 42 SP PDF" << std::endl;

	MutantStack<int> stack;

	for (int i = 0; i < 10; i++)
	{
		stack.push(pow(i, 9));
	}

	std::cout << stack.top() << std::endl;
	stack.pop();
	std::cout << stack.size() << std::endl;

	MutantStack<int>::iterator it_stack = stack.begin();
	MutantStack<int>::iterator ite_stack = stack.end();

	std::cout << "First one: "<< *it_stack << std::endl;
	std::cout << "Second one: " << *ite_stack << std::endl;

	return 0;
}
