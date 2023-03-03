/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:54:17 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 14:22:27 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		string	name;
		Weapon	*weapon;
	
	public:
		HumanB(string name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon& w);
};

#endif