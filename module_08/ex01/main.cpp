/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:58:36 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/17 21:02:39 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <vector>
# include <array>
# include <list>
# include <stack>

int	main()
{
	std::vector<int> v (10);
	v[5] = 42;
	easyfind(v, 42);
	std::cout << "42 found" << std::endl;
	// easyfind(v, 43);
	
	std::array<int, 100> ar;
	ar.at(42) = 0;
	easyfind(ar, 0);
	std::cout << "0 found" << std::endl;

	std::list<int> l;
	l.push_back(12);
	easyfind(l, 12);
	std::cout << "12 found" << std::endl;
}