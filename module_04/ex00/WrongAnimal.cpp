/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:57:14 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/03 18:40:41 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	cout << "Default Constructor called of WrongAnimal" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	_type = copy.getType();
	cout << "Copy Constructor called of WrongAnimal" << endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	cout << "Destructor called of WrongAnimal" << endl;
}


// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	_type = assign.getType();
	return *this;
}


// Getters / Setters
string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound(void) const
{
	cout << "Rawrrr" << endl;
}