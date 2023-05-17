/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:59:50 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/17 13:03:37 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point a(0, 0);
	Point b(1, 0);
	Point c(0, 1);
	Point x(0, 0);
	Point x1(-1, 0);
	Point x2(0.5, 0.5);
	Point x3(0, 1);
	
	std::cout << bsp(a, b, c, x) << std::endl;
	std::cout << bsp(a, b, c, x1) << std::endl;
	std::cout << bsp(a, b, c, x2) << std::endl;
	std::cout << bsp(a, b, c, x3) << std::endl;
	return 0;
}