/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:24:30 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/07 17:55:58 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	_type = "";
	cout << "Default Constructor called of AMateria" << endl;
}

AMateria::AMateria(string const & type)
{
	_type = type;
	cout << "Default Constructor called of AMateria of type " << _type << endl;
}

AMateria::AMateria(const AMateria &copy)
{
	_type = copy.getType();
	cout << "Copy Constructor called of AMateria of type " << _type << endl;
}

// Destructor
AMateria::~AMateria(void)
{
	cout << "Destructor called of AMateria of type " << _type << endl;
}

string const & AMateria::getType(void) const
{
	return _type;
}
