/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:16:58 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:51:28 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name")
{
	_Name = "";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 30;
	std::cout << "Default Constructor called of DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 30;
	std::cout << "Fields Constructor called of DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor called of DiamondTrap" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond name is " << DiamondTrap::_Name << " and ClapTrap name is " << ClapTrap::_Name << std::endl;
}
