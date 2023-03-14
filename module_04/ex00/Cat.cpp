/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:10:15 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Default Constructor called of Cat" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of Cat" << std::endl;
}

// Destructor
Cat::~Cat()
{
	std::cout << "Destructor called of Cat" << std::endl;
}

// Member functions

void Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}