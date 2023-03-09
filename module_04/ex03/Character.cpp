/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:31:08 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:10:29 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors
Character::Character(void) : _name("")
{
	std::cout << "Default constructor called of Character" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
}

Character::Character(const std::string name) : _name(name)
{
	std::cout << "Field constructor called of Character" << std::endl;
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
	std::cout << "Copy constructor called of Character" << std::endl;
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
	std::cout << "Assignment operator overload called of Character" << std::endl;
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
	std::cout << "Destructor called of Character" << std::endl;

}

// Other member functions
std::string const & Character::getName() const
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
		std::cout << "Amateria of type " << m->getType()
			 << " equiped by Character " << _name
			 << " at slot " << idx << std::endl;
	}
	else
	{
		std::cout << "Character " << _name
			 << " has no empty spot in inventory for Amateria of type "
			 << m->getType() << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (inventory[idx] != NULL)
	{
		std::cout << "Amateria of type " << inventory[idx]->getType()
			 << " at slot " << idx
			 << " unequiped by Character " << _name << std::endl;
		inventory[idx] = NULL;
	}
	else 
	{
		std::cout << "Could not unequip empty slot" << idx
			 << " of Character " << _name << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != NULL)
		inventory[idx]->use(target);
	else 
	{
		std::cout << "Could not use Amateria of empty slot" << idx
			 << " of Character " << _name << std::endl;
	}
}
