/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:39:15 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:43:28 by lle-bret         ###   ########.fr       */
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
	s = t;
	t.guardGate();
}