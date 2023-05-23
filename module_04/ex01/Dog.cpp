/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 16:16:43 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default Constructor called of Dog" << std::endl;
	try {
        _brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation has failed : " << e.what() << std::endl;
    }
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Copy Constructor called of Dog" << std::endl;
	try {
        _brain = new Brain(*copy._brain);;
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation has failed : " << e.what() << std::endl;
    }
}

Dog::Dog(const Brain brain) : Animal("Dog")
{
	std::cout << "Field Constructor called of Dog" << std::endl;
	try {
        _brain = new Brain(brain);;
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation has failed : " << e.what() << std::endl;
    }
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	std::cout << "Copy assignment operator called of Dog" << std::endl;
	if (this != &assign)
	{
		_type = assign._type;
		_brain = assign._brain;
	}
	return *this;
}

// Destructor
Dog::~Dog()
{
	delete _brain;
	std::cout << "Destructor called of Dog" << std::endl;
}

// Member functions

void Dog::makeSound(void) const
{
	std::cout << "Wouf!" << std::endl;
}
