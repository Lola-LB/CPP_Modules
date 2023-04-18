/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:58:36 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/18 16:19:47 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main()
{
	Span sp = Span(300000);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(11);
	sp.addNumber(9);
	// sp.addNumber(2147483647);
	// for (int i = 42; i < 1000; ++i)
	// {
	// 	sp.addNumber(i * i);
	// 	// sp.addNumber(100000 - i);
	// }
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}