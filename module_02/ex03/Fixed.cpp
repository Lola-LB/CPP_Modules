/* ************************************************************************** */
/*                                                                            */
/*                                                       ::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:58:17 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/01 18:45:18 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	//cout << "Default Constructor called" << endl;
	_RawBits = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	//cout << "Copy Constructor called" << endl;
	_RawBits = copy.getRawBits();
}

Fixed::Fixed(const int n)
{
	//cout << "Int Constructor called" << endl;
	_RawBits = n << _FracBits;
}

Fixed::Fixed(const float f)
{
	//cout << "Float Constructor called" << endl;
	_RawBits = (int(roundf(f)) << _FracBits)
		+ int(roundf((f - roundf(f)) * float(1 << _FracBits)));
}

// Destructor
Fixed::~Fixed()
{
	//cout << "Destructor called" << endl;
}

// Getters / Setters
int Fixed::getRawBits() const
{
	//cout << "getRawBits member function called" << endl;
	return _RawBits;
}

void Fixed::setRawBits( int const raw )
{
	_RawBits = raw;
	//cout << "setRawBits member function called" << endl;
}
