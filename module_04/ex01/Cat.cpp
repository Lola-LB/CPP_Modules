/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/03 18:24:25 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat(void) : Animal("Cat")
{
	cout << "Default Constructor called of Cat" << endl;
	try {
        _brain = new Brain();
    }
    catch (const bad_alloc& e) {
        cout << "Memory Allocation has failed : " << e.what() << endl;
    }
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	cout << "Copy Constructor called of Cat" << endl;
	try {
        _brain = new Brain(*copy._brain);;
    }
    catch (const bad_alloc& e) {
        cout << "Memory Allocation has failed : " << e.what() << endl;
    }
}

Cat::Cat(const Brain brain) : Animal("Cat")
{
	cout << "Field Constructor called of Cat" << endl;
	try {
        _brain = new Brain(brain);;
    }
    catch (const bad_alloc& e) {
        cout << "Memory Allocation has failed : " << e.what() << endl;
    }
}

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	cout << "Copy assignment operator called of Cat" << endl;
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
	cout << "Destructor called of Cat" << endl;
}

// Member functions

void Cat::makeSound(void) const
{
	cout << "Meow!" << endl;
}
