/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:04:03 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/16 15:22:52 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie( );
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
		void	set_name( std::string name );
};

Zombie*	zombieHorde( int N, std::string name );

#endif