/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:24:30 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:10:29 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	_type = "";
	std::cout << "Default Constructor called of AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
	std::cout << "Default Constructor called of AMateria of type " << _type << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of AMateria of type " << _type << std::endl;
}

// Destructor
AMateria::~AMateria(void)
{
	std::cout << "Destructor called of AMateria of type " << _type << std::endl;
}

std::string const & AMateria::getType(void) const
{
	return _type;
}
