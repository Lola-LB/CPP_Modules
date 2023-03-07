/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/03 18:29:23 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog(void) : Animal("Dog")
{
	cout << "Default Constructor called of Dog" << endl;
	try {
        _brain = new Brain();
    }
    catch (const bad_alloc& e) {
        cout << "Memory Allocation has failed : " << e.what() << endl;
    }
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	cout << "Copy Constructor called of Dog" << endl;
	try {
        _brain = new Brain(*copy._brain);;
    }
    catch (const bad_alloc& e) {
        cout << "Memory Allocation has failed : " << e.what() << endl;
    }
}

Dog::Dog(const Brain brain) : Animal("Dog")
{
	cout << "Field Constructor called of Dog" << endl;
	try {
        _brain = new Brain(brain);;
    }
    catch (const bad_alloc& e) {
        cout << "Memory Allocation has failed : " << e.what() << endl;
    }
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	cout << "Copy assignment operator called of Dog" << endl;
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
	cout << "Destructor called of Dog" << endl;
}

// Member functions

void Dog::makeSound(void) const
{
	cout << "Wouf!" << endl;
}
