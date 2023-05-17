/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:05:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/16 15:25:46 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombies;

	
	zombies = zombieHorde(10, std::string("aaargh"));
	for (int i = 0; i < 10; i++)
	{
		std::cout << "N° " << i << std::endl;
		zombies[i].announce();
	}
	delete[] zombies;
}