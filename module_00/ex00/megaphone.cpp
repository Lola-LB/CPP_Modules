/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:27:03 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/20 11:01:59 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

using namespace std;

int main(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		for (int x = 0; x < strlen(av[i]); x++)
			putchar(toupper(av[i][x]));
	}
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << "\n";
	return 0;
}