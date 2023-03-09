/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:57:14 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:10:29 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "Default Constructor called of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of WrongAnimal" << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called of WrongAnimal" << std::endl;
}


// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	_type = assign.getType();
	return *this;
}


// Getters / Setters
std::string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Rawrrr" << std::endl;
}