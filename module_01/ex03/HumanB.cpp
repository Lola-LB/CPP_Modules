/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:51:04 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 14:22:39 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name)
{
	this->name = name;
	this->weapon = NULL;
}

void	HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}

void	HumanB::attack(void)
{
	cout << name << " attacks with their "
		 << weapon->getType() << endl;
}

HumanB::~HumanB()
{
}