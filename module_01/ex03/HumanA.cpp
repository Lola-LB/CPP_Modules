/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:45:24 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 14:22:02 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string n, Weapon& w) : name(n), weapon(w)
{
}

void	HumanA::attack(void)
{
	cout << name << " attacks with their "
		 << weapon.getType() << endl;
}

HumanA::~HumanA()
{
}