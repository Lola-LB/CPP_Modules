/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 16:16:32 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default Constructor called of Cat" << std::endl;
	try {
        _brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation has failed : " << e.what() << std::endl;
    }
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Copy Constructor called of Cat" << std::endl;
	try {
        _brain = new Brain(*copy._brain);;
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation has failed : " << e.what() << std::endl;
    }
}

Cat::Cat(const Brain brain) : Animal("Cat")
{
	std::cout << "Field Constructor called of Cat" << std::endl;
	try {
        _brain = new Brain(brain);;
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation has failed : " << e.what() << std::endl;
    }
}

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	std::cout << "Copy assignment operator called of Cat" << std::endl;
	if (this != &assign)
	{
		_type = assign._type;
		_brain = assign._brain;
	}
	return *this;
}

// Destructor
Cat::~Cat()
{
	delete _brain;
	std::cout << "Destructor called of Cat" << std::endl;
}

// Member functions

void Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}
