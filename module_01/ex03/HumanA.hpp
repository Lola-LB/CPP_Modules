/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:51:04 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 14:22:15 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		string	name;
		Weapon& weapon;
	
	public:
		HumanA(void);
		HumanA(string n, Weapon& w);
		~HumanA(void);
		void	attack(void);
};

#endif