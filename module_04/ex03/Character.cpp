/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:31:08 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/07 18:39:18 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors
Character::Character(void) : _name("")
{
	cout << "Default constructor called of Character" << endl;
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
}

Character::Character(const string name) : _name(name)
{
	cout << "Field constructor called of Character" << endl;
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
}

Character::Character(const Character & copy) : _name(copy.getName())
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		inventory[i] = copy.inventory[4]->clone();
	}
	cout << "Copy constructor called of Character" << endl;
}

// Operators
Character & Character::operator=(const Character &assign)
{
	_name = assign.getName();
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		inventory[i] = assign.inventory[4]->clone();
	}
	cout << "Assignment operator overload called of Character" << endl;
	return (*this);
}

// Destructor
Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	cout << "Destructor called of Character" << endl;

}

// Other member functions
string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int	idx = 0;

	while (idx < 4 && inventory[idx] != NULL)
		++idx;
	if (idx < 4)
	{
		inventory[idx] = m;
		cout << "Amateria of type " << m->getType()
			 << " equiped by Character " << _name
			 << " at slot " << idx << endl;
	}
	else
	{
		cout << "Character " << _name
			 << " has no empty spot in inventory for Amateria of type "
			 << m->getType() << endl;
	}
}

void Character::unequip(int idx)
{
	if (inventory[idx] != NULL)
	{
		cout << "Amateria of type " << inventory[idx]->getType()
			 << " at slot " << idx
			 << " unequiped by Character " << _name << endl;
		inventory[idx] = NULL;
	}
	else 
	{
		cout << "Could not unequip empty slot" << idx
			 << " of Character " << _name << endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != NULL)
		inventory[idx]->use(target);
	else 
	{
		cout << "Could not use Amateria of empty slot" << idx
			 << " of Character " << _name << endl;
	}
}
