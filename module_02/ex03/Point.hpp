/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:27:19 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 13:09:53 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

using namespace std;

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	
	public:
		// Constructors
		Point(void);
		Point(const Point &copy);
		Point(const float x, const float y);

		// Destructors
		~Point(void);

		// Operators
		Point &	operator=(const Point &assign);

		// Getters / Setters
		Fixed const get_x(void) const;
		Fixed const get_y(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif