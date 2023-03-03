/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:38:38 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 13:35:36 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed abs(Fixed x)
{
    return (x * (x > 0) - x * (x < 0));
}

Fixed zone(Point const a, Point const b, Point const c)
{
    return (((a.get_x() * (b.get_y() - c.get_y())) +
             (b.get_x() * (c.get_y() - a.get_y())) +
             (c.get_x() * (a.get_y() - b.get_y()))) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed	abc = abs(zone(a, b, c));
    Fixed	pab = abs(zone(point, a, b));
    Fixed	pbc = abs(zone(point, b, c));
    Fixed	pca = abs(zone(point, c, a));

    return  (abc == pab + pbc + pca);
}