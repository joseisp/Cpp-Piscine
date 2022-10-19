/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:03:11 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/18 17:15:48 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie *hordeZombie;
	int nZombie = 5;
	int i = 0;

	hordeZombie = zombieHorde(nZombie, "Z");

	while (i < nZombie)
	{
		hordeZombie[i].announce();
		i++;
	}
	
	delete [] hordeZombie;
}
