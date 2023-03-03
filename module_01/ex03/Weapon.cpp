/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:45:17 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 13:58:26 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string type)
{
	this->type = type;
}

Weapon::Weapon(void) : type(string(""))
{
}

const string&	Weapon::getType(void)
{
	const string&	ref = this->type;

	return (ref);
}

void	Weapon::setType(string type)
{
	this->type = type;
}
