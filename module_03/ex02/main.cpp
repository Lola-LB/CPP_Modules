/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:39:15 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 16:47:32 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap diamond("diamond");

	cout << "Attack damage (30) " << diamond.getAttackDamage() << endl;
	cout << "Energy points (50) " << diamond.getEnergyPoints() << endl;
	cout << "Hit points (100) " << diamond.getHitPoints() << endl;
	diamond.attack("test");
	diamond.whoAmI();
}