/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:37:07 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 11:24:38 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
