/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:04:03 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/17 11:52:22 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie( std::string name );
		~Zombie( void );
		void announce( void );
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif