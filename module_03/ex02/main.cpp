/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:39:15 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:49:34 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	FragTrap	f("frag");
	FragTrap	t(f);
	ClapTrap	c("clap");

	std::cout << "f HitPoints: " << f.getHitPoints() << std::endl;
	std::cout << "f EnergyPoints: " << f.getEnergyPoints() << std::endl;
	std::cout << "f AttackDamage: " << f.getAttackDamage() << std::endl;
	f = t;
	t.highFivesGuys();
}