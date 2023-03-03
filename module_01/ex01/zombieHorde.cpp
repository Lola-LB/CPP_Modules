/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:41:06 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 11:34:29 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <vector>

Zombie*	Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*zombies = (Zombie*)::operator new
		( (std::size_t) N * sizeof(Zombie));

	for (int i = 0; i < N; i++)
		zombies[i] = Zombie(name);
	return (zombies);
}