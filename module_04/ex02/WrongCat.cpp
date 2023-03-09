/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:12:41 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "Default Constructor called of WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of WrongCat" << std::endl;
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "Destructor called of WrongCat" << std::endl;
}

// Member functions

void WrongCat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}
