/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:16:58 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:39:22 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "Default Constructor called of ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "Fields Constructor called of ScavTrap" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called of ScavTrap" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

// Member functions
void ScavTrap::attack(const std::string& target)
{
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		std::cout << "ScavTrap "<< _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
	}
	else if (_EnergyPoints == 0)
		std::cout << "ScavTrap "<< _Name << " has no energy points left and cannot attack." << std::endl;
	else
		std::cout << "ScavTrap "<< _Name << " has no hit points left and cannot attack." << std::endl;
}
