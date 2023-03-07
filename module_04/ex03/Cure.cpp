/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:33:30 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/07 17:55:05 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

AMateria* Cure::clone(void) const
{
	return (new Cure());
}

// Operators
Cure & Cure::operator=(const Cure &assign)
{
	(void) assign;
	_type = "cure";
	cout << "Copy assignment operator called of Cure" << endl;
	return *this;
}

// Other member functions
void Cure::use(ICharacter& target)
{
	cout << "* heals "<< target.getName() << "’s wounds *" << endl;
}