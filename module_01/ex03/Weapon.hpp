/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:46:58 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 13:58:39 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
using namespace std;

class Weapon
{
	private:
		string	type;
	
	public:
		Weapon(string);
		Weapon(void);
		const string&	getType(void);
		void			setType(string);
};

#endif