/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:16:58 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 15:39:37 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	cout << "Default Constructor called of FragTrap" << endl;
}

FragTrap::FragTrap(string name)
{
	_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	cout << "Fields Constructor called of FragTrap" << endl;
}

// Destructor
FragTrap::~FragTrap(void)
{
	cout << "Destructor called of FragTrap" << endl;
}

void FragTrap::highFivesGuys(void)
{
	cout << "C'mon guys give me a high five !" << endl;
}
