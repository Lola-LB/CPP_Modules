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
	//std::cout << "Default Constructor called" << std::endl;
	_RawBits = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy Constructor called" << std::endl;
	_RawBits = copy.getRawBits();
}

Fixed::Fixed(const int n)
{
	//std::cout << "Int Constructor called" << std::endl;
	_RawBits = n << _FracBits;
}

Fixed::Fixed(const float f)
{
	//std::cout << "Float Constructor called" << std::endl;
	_RawBits = (int(roundf(f)) << _FracBits)
		+ int(roundf((f - roundf(f)) * float(1 << _FracBits)));
}

// Destructor
Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

// Getters / Setters
int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return _RawBits;
}

void Fixed::setRawBits( int const raw )
{
	_RawBits = raw;
	//std::cout << "setRawBits member function called" << std::endl;
}
