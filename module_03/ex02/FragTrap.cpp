/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:16:58 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:46:09 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "Default Constructor called of FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "Fields Constructor called of FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap & copy) : ClapTrap(copy.getName())
{
	_HitPoints = copy.getHitPoints();
	_EnergyPoints = copy.getEnergyPoints();
	_AttackDamage = copy.getAttackDamage();
	std::cout << "Copy Constructor called of FragTrap" << std::endl;
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called of FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "C'mon guys give me a high five !" << std::endl;
}
