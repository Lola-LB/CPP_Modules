/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:39:15 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:52:44 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap diamond("diamond");

	std::cout << "Attack damage (30) " << diamond.getAttackDamage() << std::endl;
	std::cout << "Energy points (50) " << diamond.getEnergyPoints() << std::endl;
	std::cout << "Hit points (100) " << diamond.getHitPoints() << std::endl;
	diamond.attack("test");
	diamond.whoAmI();
}