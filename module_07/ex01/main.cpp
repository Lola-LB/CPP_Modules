/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:31:26 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/24 13:30:51 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstring>

void	pchar(char c)
{
	std::cout << c;
}

int	pstr(char* str)
{
	std::cout << str << std::endl;
	return (0);
}

void	triple(int i)
{
	std::cout << i * 3 << std::endl;
}

int main( int ac, char **av ) {
	if (ac > 1)
	{
		iter<char, void>(av[1], std::strlen(av[1]), pchar);
		std::cout << std::endl;
		iter<char*, int>(av, ac, pstr);
	}
	int *ar = new int[10];
	for (int i = 0; i < 10; i++)
		ar[i] = i;
	iter<int, void>(ar, 10, triple);
	return 0;
}