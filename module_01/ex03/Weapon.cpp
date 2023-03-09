/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:45:17 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:10:29 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon(void) : type(std::string(""))
{
}

const std::string&	Weapon::getType(void)
{
	const std::string&	ref = this->type;

	return (ref);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
