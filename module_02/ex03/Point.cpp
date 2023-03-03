/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:27:21 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 12:23:36 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)) , _y(Fixed(0))
{
}

Point::Point(const Point &copy) : _x(Fixed(copy.get_x())) , _y(Fixed(copy.get_y()))
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::~Point()
{
}

Point &	Point::operator=(const Point &assign)
{
	if ( this != &assign )
	{
        (Fixed) this->_x = assign.get_x();
        (Fixed) this->_y = assign.get_y();
    }
	return (*this);
}

Fixed const Point::get_x(void) const
{
	return (_x);
}

Fixed const Point::get_y(void) const
{
	return (_y);
}
