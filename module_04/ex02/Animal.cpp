/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:25 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/05 20:14:26 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	_type = "Animal";
	cout << "Default Constructor called of Animal" << endl;
}

Animal::Animal(string type)
{
	_type = type;
	cout << "Field Constructor called of Animal" << endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy.getType();
	cout << "Copy Constructor called of Animal" << endl;
}

// Destructor
Animal::~Animal()
{
	cout << "Destructor called of Animal" << endl;
}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
	_type = assign.getType();
	cout << "Copy assignment operator called of Animal" << endl;
	return *this;
}

// Getters / Setters
string Animal::getType() const
{
	return _type;
}
