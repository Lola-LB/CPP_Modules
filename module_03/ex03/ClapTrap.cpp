/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:50:31 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:36:51 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap() : _Name("")
{
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "Default Constructor called of ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _Name(copy.getName())
{
	_HitPoints = copy.getHitPoints();
	_EnergyPoints = copy.getEnergyPoints();
	_AttackDamage = copy.getAttackDamage();
	std::cout << "Copy Constructor called of ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name)
{
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "Fields Constructor called of ClapTrap" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called of ClapTrap" << std::endl;
}

// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_HitPoints = assign.getHitPoints();
	_EnergyPoints = assign.getEnergyPoints();
	_AttackDamage = assign.getAttackDamage();
	std::cout << "Copy assignment overload called of ClapTrap" << std::endl;
	return *this;
}

// Getters / Setters
std::string ClapTrap::getName(void) const
{
	return (_Name);
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
void ClapTrap::attack(const std::string& target)
{
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		std::cout << "ClapTrap "<< _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
	else if (_EnergyPoints == 0)
		std::cout << "ClapTrap "<< _Name << " has no energy points left and cannot attack." << std::endl;
	else
		std::cout << "ClapTrap "<< _Name << " has no hit points left and cannot attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints > 0)
	{
		_HitPoints -= amount;
		_HitPoints = (_HitPoints >= 0) * _HitPoints;
		std::cout << "ClapTrap " << _Name << " takes " << amount << " points of damage! Now at " << _HitPoints << " hit points." << std::endl;
	}
	else
		std::cout << "ClapTrap "<< _Name << " has no hit points left and cannot take damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		_HitPoints += amount;
		_EnergyPoints--;
		std::cout << "ClapTrap "<< _Name << " is repaired by " << amount << " hit points! Now at " << _HitPoints << " hit points." << std::endl;
	}
	else if (_EnergyPoints == 0)
		std::cout << "ClapTrap "<< _Name << " has no energy points left and cannot be repaired." << std::endl;
	else
		std::cout << "ClapTrap "<< _Name << " has no hit points left and cannot be repaired." << std::endl;
}
