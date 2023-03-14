/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:33:30 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/08 15:12:03 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

AMateria* Ice::clone(void) const
{
	return (new Ice());
}

// Operators
Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	_type = "ice";
	cout << "Copy assignment operator called of Ice" << endl;
	return *this;
}

// Other member functions
void Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at "<< target.getName() << " *" << endl;
}