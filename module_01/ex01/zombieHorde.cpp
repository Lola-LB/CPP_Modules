/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:41:06 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/16 15:23:25 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].set_name(name);
	return (zombies);
}