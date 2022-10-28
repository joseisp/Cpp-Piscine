/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:54:12 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/28 15:51:02 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap	jooj("Jooj");
	ScavTrap	mi("Mi");
	FragTrap	carlos("Carlos");

	std::cout << std::endl;

	jooj.setDamage(10);
	mi.setDamage(10);
	carlos.setDamage(10);

	std::cout << std::endl;

	jooj.attack(mi.getName());
	mi.takeDamage(jooj.getAttackD());

	std::cout << std::endl;

	mi.attack(carlos.getName());
	carlos.takeDamage(mi.getAttackD());

	std::cout << std::endl;

	mi.guardGate();

	std::cout << std::endl;

	carlos.highFivesGuys();

	std::cout << std::endl;
}
