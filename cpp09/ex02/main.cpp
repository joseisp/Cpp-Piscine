/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:42:31 by jinacio-          #+#    #+#             */
/*   Updated: 2023/06/28 20:22:16 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
	PmergeMe pm;

	try
	{
		if (argc > 2)
			pm.init(argv, argc);
		else
			throw "Error...";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
