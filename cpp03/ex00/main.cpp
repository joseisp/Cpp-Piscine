/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:54:12 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/27 16:25:00 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	jooj("Jooj");
	ClapTrap	erigui("Erigui");

	jooj.setDamage(1);

	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());
	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());
	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());
	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());
	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());
	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());
	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());
	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());
	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());
	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());

	jooj.setEnergy(10);
	jooj.attack(erigui.getName());
	erigui.takeDamage(jooj.getAttackD());

	std::cout << erigui.getHit() << std::endl;

}
