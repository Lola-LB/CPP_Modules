/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:05:51 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/16 15:23:16 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	_name = "";
}

Zombie::Zombie( std::string name )
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destroyed: " << _name << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name( std::string name )
{
	_name = name;
}