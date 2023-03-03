/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:16:58 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 16:33:58 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	cout << "Default Constructor called of ScavTrap" << endl;
}

ScavTrap::ScavTrap(string name)
{
	_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	cout << "Fields Constructor called of ScavTrap" << endl;
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	cout << "Destructor called of ScavTrap" << endl;
}

void ScavTrap::guardGate(void)
{
	cout << "ScavTrap is now in Gate keeper mode." << endl;
}

// Member functions
void ScavTrap::attack(const string& target)
{
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		cout << "ScavTrap "<< _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << endl;
	}
	else if (_EnergyPoints == 0)
		cout << "ScavTrap "<< _Name << " has no energy points left and cannot attack." << endl;
	else
		cout << "ScavTrap "<< _Name << " has no hit points left and cannot attack." << endl;
}
