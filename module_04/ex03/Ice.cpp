/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:33:30 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 18:08:14 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

AMateria* Ice::clone(void) const
{
	return (new Ice());
}

// Operators
Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	_type = "ice";
	std::cout << "Copy assignment operator called of Ice" << std::endl;
	return *this;
}

// Destructor
Ice::~Ice(void)
{
	std::cout << "Destructor called of AMateria of type " << _type << std::endl;
}

// Other member functions
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
