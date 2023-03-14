/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:05:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:12:41 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombies;

	
	zombies = Zombie::zombieHorde(10, std::string("aaargh"));
	for (int i = 0; i < 10; i++)
	{
		std::cout << "N° " << i << std::endl;
		zombies[i].announce();
	}
	delete (zombies);
}