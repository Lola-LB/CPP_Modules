/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 15:57:51 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	_type = "Animal";
	std::cout << "Default Constructor called of Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of Animal" << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Destructor called of Animal" << std::endl;
}


// Operators
Animal & Animal::operator=(const Animal &assign)
{
	_type = assign.getType();
	std::cout << "Copy assignment operator called of Animal" << std::endl;
	return *this;
}


// Getters / Setters
std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound(void) const
{
	std::cout << "Rawrrr" << std::endl;
}