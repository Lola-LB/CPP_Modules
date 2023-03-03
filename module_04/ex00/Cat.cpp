/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 21:53:23 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal()
{
	_type = "Cat";
	cout << "Default Constructor called of Cat" << endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	_type = copy.getType();
	cout << "Copy Constructor called of Cat" << endl;
}

// Destructor
Cat::~Cat()
{
	cout << "Destructor called of Cat" << endl;
}

// Member functions

void Cat::makeSound(void) const
{
	cout << "Meow!" << endl;
}