/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:24:30 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 18:10:21 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

AMateria::AMateria(void)
{
	_type = "";
	std::cout << "Default Constructor called of AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
	std::cout << "Field Constructor called of AMateria of type " << _type << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of AMateria of type " << _type << std::endl;
}

// Operator
AMateria & AMateria::operator=(const AMateria &assign)
{
	(void) assign;
	std::cout << "Copy assignment operator called of AMateria of type " << _type << std::endl;
	return *this;
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

void AMateria::use(ICharacter& target)
{
	(void) target;
}