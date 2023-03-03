/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:58:17 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/28 20:01:57 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : _FracBits(8)
{
	cout << "Default Constructor called" << endl;
	_RawBits = 0;
}

Fixed::Fixed(const Fixed &copy) : _FracBits(copy._FracBits)
{
	cout << "Copy Constructor called" << endl;
	_RawBits = copy.getRawBits();
}

Fixed::Fixed(const int n) : _FracBits(8)
{
	cout << "Int Constructor called" << endl;
	_RawBits = n << _FracBits;
}

Fixed::Fixed(const float f) : _FracBits(8)
{
	cout << "Float Constructor called" << endl;
	_RawBits = (int(roundf(f)) << _FracBits)
		+ int(roundf((f - roundf(f)) * float(1 << _FracBits)));
}

// Destructor
Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	cout << "Copy assignment operator called" << endl;
	_RawBits = assign.getRawBits();
	return *this;
}

ostream& operator<<(ostream& os, const Fixed& f)
{
    os << f.toFloat();
	return (os);
}

// Getters / Setters
int Fixed::getRawBits() const
{
	cout << "getRawBits member function called" << endl;
	return _RawBits;
}

void Fixed::setRawBits( int const raw )
{
	_RawBits = raw;
	cout << "setRawBits member function called" << endl;
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