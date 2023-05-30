/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:58:36 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/30 16:05:39 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define MAX_VAL 10

int main()
{
	try
	{
		Span short_span = Span(3);
		short_span.addNumber(6);
		short_span.addNumber(3);
		short_span.addNumber(17);
		short_span.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	srand(time(NULL));
	
	Span sp = Span(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 42;
		std::cout << value << " ";
        sp.addNumber(value);
    }
	std::cout << std::endl;

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return (0);
}