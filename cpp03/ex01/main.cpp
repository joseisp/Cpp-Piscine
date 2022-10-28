/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:54:12 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/27 23:47:25 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap	jooj("Jooj");
	ScavTrap	cigano("Cigano");
	std::cout << std::endl;

	cigano.setDamage(1);
	jooj.setDamage(1);
	std::cout << std::endl;

	jooj.attack(cigano.getName());
	cigano.takeDamage(jooj.getAttackD());
	cigano.attack(jooj.getName());
	jooj.takeDamage(cigano.getAttackD());
	std::cout << std::endl;

	cigano.guardGate();
	std::cout << std::endl;
}
