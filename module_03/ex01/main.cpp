/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:39:15 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/17 13:37:36 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap	s("scav");
	ScavTrap	t(s);
	ClapTrap	c("clap");

	std::cout << "s HitPoints: " << s.getHitPoints() << std::endl;
	std::cout << "s EnergyPoints: " << s.getEnergyPoints() << std::endl;
	std::cout << "s AttackDamage: " << s.getAttackDamage() << std::endl;
	std::cout << "t HitPoints: " << t.getHitPoints() << std::endl;
	std::cout << "t EnergyPoints: " << t.getEnergyPoints() << std::endl;
	std::cout << "t AttackDamage: " << t.getAttackDamage() << std::endl;
	std::cout << "c HitPoints: " << c.getHitPoints() << std::endl;
	std::cout << "c EnergyPoints: " << c.getEnergyPoints() << std::endl;
	std::cout << "c AttackDamage: " << c.getAttackDamage() << std::endl;
	s = t;
	t.guardGate();
}