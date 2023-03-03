/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 21:55:40 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal()
{
	_type = "Dog";
	cout << "Default Constructor called of Dog" << endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	_type = copy.getType();
	cout << "Copy Constructor called of Dog" << endl;
}

// Destructor
Dog::~Dog()
{
	cout << "Destructor called of Dog" << endl;
}

// Member functions

void Dog::makeSound(void) const
{
	cout << "Wouf!" << endl;
}