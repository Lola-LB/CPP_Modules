/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:51:04 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:10:29 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon& weapon;
	
	public:
		HumanA(void);
		HumanA(std::string n, Weapon& w);
		~HumanA(void);
		void	attack(void);
};

#endif