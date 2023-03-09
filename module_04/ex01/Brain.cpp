/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:18:09 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:10:29 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "Default Constructor called of Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	std::cout << "Copy Constructor called of Brain" << std::endl;
}

Brain::Brain(const std::string* ideas)
{
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = ideas[i];
	std::cout << "Fields Constructor called of Brain" << std::endl;
}

// Destructor
Brain::~Brain()
{
	std::cout << "Destructor called of Brain" << std::endl;
}

// Operators
Brain & Brain::operator=(const Brain &assign)
{
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = assign._ideas[i];
	std::cout << "Copy assignment operator called of Brain" << std::endl;
	return *this;
}
