/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:04:03 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 11:33:46 by lle-bret         ###   ########.fr       */
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
		static Zombie* newZombie( std::string name );
		static void randomChump( std::string name );
		static Zombie* zombieHorde( int N, std::string name );

};

#endif