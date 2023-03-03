/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:50:31 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 16:34:17 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
{
	_Name = "";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	cout << "Default Constructor called of ClapTrap" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_Name = copy.getName();
	_HitPoints = copy.getHitPoints();
	_EnergyPoints = copy.getEnergyPoints();
	_AttackDamage = copy.getAttackDamage();
	cout << "Copy Constructor called of ClapTrap" << endl;
}

ClapTrap::ClapTrap(string Name)
{
	_Name = Name;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	cout << "Fields Constructor called of ClapTrap" << endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	cout << "Destructor called of ClapTrap" << endl;
}

// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_Name = assign.getName();
	_HitPoints = assign.getHitPoints();
	_EnergyPoints = assign.getEnergyPoints();
	_AttackDamage = assign.getAttackDamage();
	cout << "Copy assignment overload called of ClapTrap" << endl;
	return *this;
}

// Getters / Setters
string ClapTrap::getName(void) const
{
	return (_Name);
}

void ClapTrap::setName(const string name)
{
	_Name = name;
}

int ClapTrap::getHitPoints(void) const
{
	return (_HitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return(_EnergyPoints);	
}

int ClapTrap::getAttackDamage(void) const
{
	return(_AttackDamage);
}

// Member functions
void ClapTrap::attack(const string& target)
{
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		cout << "ClapTrap "<< _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << endl;
	}
	else if (_EnergyPoints == 0)
		cout << "ClapTrap "<< _Name << " has no energy points left and cannot attack." << endl;
	else
		cout << "ClapTrap "<< _Name << " has no hit points left and cannot attack." << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints > 0)
	{
		_HitPoints -= amount;
		cout << "ClapTrap " << _Name << " takes " << amount << " points of damage! Now at " << _HitPoints << " hit points." << endl;
	}
	else
		cout << "ClapTrap "<< _Name << " has no hit points left and cannot take damage." << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		_HitPoints += amount;
		_EnergyPoints--;
		cout << "ClapTrap "<< _Name << " is repaired by " << amount << " hit points! Now at " << _HitPoints << " hit points." << endl;
	}
	else if (_EnergyPoints == 0)
		cout << "ClapTrap "<< _Name << " has no energy points left and cannot be repaired." << endl;
	else
		cout << "ClapTrap "<< _Name << " has no hit points left and cannot be repaired." << endl;
}
