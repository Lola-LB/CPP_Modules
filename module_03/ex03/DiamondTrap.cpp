/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:16:58 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 16:47:08 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name")
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 30;
	cout << "Default Constructor called of DiamondTrap" << endl;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name")
{
	_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 30;
	cout << "Fields Constructor called of DiamondTrap" << endl;
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "Destructor called of DiamondTrap" << endl;
}

void DiamondTrap::whoAmI(void)
{
	cout << "Diamond name is " << DiamondTrap::_Name << " and ClapTrap name is " << ClapTrap::_Name << endl;
}
