/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:34:46 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 12:31:50 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed & Fixed::operator=(const Fixed &assign)
{
//	cout << "Copy assignment operator called" << endl;
	_RawBits = assign.getRawBits();
	return (*this);
}

ostream& operator<<(ostream& os, const Fixed& f)
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
