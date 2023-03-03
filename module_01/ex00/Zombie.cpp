/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:05:51 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 11:27:12 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destroyed: " << _name << std::endl;
}

void Zombie::announce( void )
{
	std::cout << "announcing " << _name << ": BraiiiiiiinnnzzzZ...\n";
}
