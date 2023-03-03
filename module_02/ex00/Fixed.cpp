/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:58:17 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/27 11:23:21 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	_RawBits = 0;
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	_RawBits = copy.getRawBits();
}

Fixed::Fixed(int RawBits)
{
	_RawBits = RawBits;
	std::cout << "Fields Constructor called" << std::endl;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_RawBits = assign.getRawBits();
	return *this;
}

// Getters / Setters
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _RawBits;
}

void Fixed::setRawBits( int const raw )
{
	_RawBits = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
