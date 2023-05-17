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

Fixed & Fixed::operator=(const Fixed &assign)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	_RawBits = assign.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
	return (os);
}

// Arithmetic
Fixed Fixed::operator+(const Fixed &a) const
{
	Fixed	res;
	res.setRawBits(_RawBits + a.getRawBits());
	return (res);
}

Fixed Fixed::operator-(const Fixed &a) const
{
	Fixed	res;
	res.setRawBits(_RawBits - a.getRawBits());
	return (res);
}

Fixed Fixed::operator*(const Fixed &a) const
{
	Fixed	res;
	res.setRawBits((_RawBits * a.getRawBits()) >> _FracBits);
	return (res);
}

Fixed Fixed::operator/(const Fixed &a) const
{
	Fixed	res;
	res.setRawBits((_RawBits << _FracBits) / a.getRawBits());
	return (res);
}

// Increment / Decrement
Fixed Fixed::operator++(int i)
{
	Fixed b(*this);
	
	(void) i;
	_RawBits += 1;
	return (b);
}

Fixed Fixed::operator--(int i)
{
	Fixed b(*this);
	
	(void) i;
	_RawBits -= 1;
	return (b);
}

Fixed & Fixed::operator++(void)
{
	_RawBits += 1;
	return (*this);
}

Fixed & Fixed::operator--(void)
{
	_RawBits -= 1;
	return (*this);
}

// Comparison
bool Fixed::operator<(const Fixed &a) const
{
	return (_RawBits < a.getRawBits());
}

bool Fixed::operator>(const Fixed &a) const
{
	return (_RawBits > a.getRawBits());
}

bool Fixed::operator<=(const Fixed &a) const
{
	return (_RawBits <= a.getRawBits());
}

bool Fixed::operator>=(const Fixed &a) const
{
	return (_RawBits >= a.getRawBits());
}

bool Fixed::operator==(const Fixed &a) const
{
	return (_RawBits == a.getRawBits());
}

bool Fixed::operator!=(const Fixed &a) const
{
	return (_RawBits != a.getRawBits());
}

float Fixed::toFloat( void ) const
{
	float point = float(_RawBits & ((1 << _FracBits) - 1)) / float(1 << _FracBits);
	return (float(_RawBits >> _FracBits) + point);
}

int Fixed::toInt( void ) const
{
	return (int(_RawBits >> _FracBits));
}

Fixed & Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return (b);
	return (a);
}

const Fixed & Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed & Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (b);
	return (a);
}
