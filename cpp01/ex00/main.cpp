/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:03:11 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/18 16:28:50 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie *morgan;

	morgan = newZombie("Morgan");
	morgan->announce();

	randomChump("Neide");

	delete morgan;
	return 0;
}
