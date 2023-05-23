/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 15:56:48 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Default Constructor called of Dog" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of Dog" << std::endl;
}

// Destructor
Dog::~Dog()
{
	std::cout << "Destructor called of Dog" << std::endl;
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	_type = assign.getType();
	std::cout << "Copy assignment operator called of Dog" << std::endl;
	return *this;
}

// Member functions
void Dog::makeSound(void) const
{
	std::cout << "Wouf!" << std::endl;
}