/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:18:09 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/03 18:28:57 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	cout << "Default Constructor called of Brain" << endl;
}

Brain::Brain(const Brain &copy)
{
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	cout << "Copy Constructor called of Brain" << endl;
}

Brain::Brain(const string* ideas)
{
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = ideas[i];
	cout << "Fields Constructor called of Brain" << endl;
}

// Destructor
Brain::~Brain()
{
	cout << "Destructor called of Brain" << endl;
}

// Operators
Brain & Brain::operator=(const Brain &assign)
{
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = assign._ideas[i];
	cout << "Copy assignment operator called of Brain" << endl;
	return *this;
}
