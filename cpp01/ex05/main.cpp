/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:02:30 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/21 20:41:39 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl angrily;
	if (argc < 2)
	{
		std::cout << "Check teh arguments, please!!!" << std::endl;
		return 0;
	}

	angrily.complain(argv[1]);
}
