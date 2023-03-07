/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:43:01 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/07 18:30:12 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CPP
# define CHARACTER_CPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

using namespace std;

class Character : public ICharacter
{
	private:
		string		_name;

	public:
		AMateria*	inventory[4];
		
		// Constructors
		Character(void);
		Character(const string name);
		Character(const Character & copy);

		// Operators
		Character & operator=(const Character &assign);

		// Destructor
		~Character(void);

		// Other member functions
		string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif