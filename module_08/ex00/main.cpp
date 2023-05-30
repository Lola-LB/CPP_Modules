/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:58:36 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/30 15:48:12 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <vector>
# include <list>
# include <stack>
# include <queue>
# include <deque>

int	main()
{
	try
	{
		std::vector<int> v (10);
		v[5] = 42;
		easyfind(v, 42);
		std::cout << "42 found in vector" << std::endl;
		
		std::deque<int> dq;
		dq.insert(dq.begin(), 2);
		dq.insert(dq.begin(), 0);
		dq.insert(dq.begin(), 0);
		dq.insert(dq.begin(), 0);
		dq.insert(dq.begin(), 0);
		easyfind(dq, 2);
		std::cout << "2 found in double ended queue" << std::endl;

		std::list<int> l;
		l.push_back(12);
		easyfind(l, 12);
		std::cout << "12 found in list" << std::endl;
		
		easyfind(v, 43);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}