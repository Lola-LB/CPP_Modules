/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:58:17 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:15:54 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : _FracBits(8)
{
	std::cout << "Default Constructor called" << std::endl;
	_RawBits = 0;
}

Fixed::Fixed(const Fixed &copy) : _FracBits(copy._FracBits)
{
	std::cout << "Copy Constructor called" << std::endl;
	_RawBits = copy.getRawBits();
}

Fixed::Fixed(const int n) : _FracBits(8)
{
	std::cout << "Int Constructor called" << std::endl;
	_RawBits = n << _FracBits;
}

Fixed::Fixed(const float f) : _FracBits(8)
{
	std::cout << "Float Constructor called" << std::endl;
	_RawBits = (int(roundf(f)) << _FracBits)
		+ int(roundf((f - roundf(f)) * float(1 << _FracBits)));
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

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
	return (os);
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

// Conversion
float Fixed::toFloat( void ) const
{
	float point = float(_RawBits & ((1 << _FracBits) - 1)) / float(1 << _FracBits);
	return (float(_RawBits >> _FracBits) + point);
}

int Fixed::toInt( void ) const
{
	return (int(_RawBits >> _FracBits));
}