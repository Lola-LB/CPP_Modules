/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:39:15 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/17 13:12:43 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap b;
	ClapTrap c("clap");
	
	std::cout << "HitPoints: " << c.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << c.getEnergyPoints() << std::endl;
	std::cout << "AttackDamage: " << c.getAttackDamage() << std::endl;
	c.attack("victim");
	c.takeDamage(5);
	std::cout << "HitPoints: " << c.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << c.getEnergyPoints() << std::endl;
	c.beRepaired(3);
	std::cout << "HitPoints: " << c.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << c.getEnergyPoints() << std::endl;
	c.takeDamage(9);
	c.beRepaired(3);
}