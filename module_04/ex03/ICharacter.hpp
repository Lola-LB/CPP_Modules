/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:43:01 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/07 18:38:30 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_CPP
# define ICHARACTER_CPP

# include <iostream>
# include <string>

# include "AMateria.hpp"

using namespace std;

class ICharacter
{
	public:
		virtual ~ICharacter(void) {};
		virtual string const & getName(void) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif