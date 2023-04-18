/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:58:36 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/18 18:20:42 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{
	MutantStack<int> s;

	s.push(42);
	s.push(24);
	s.push(12);
	s.push(6);
	s.push(3);

	MutantStack<int>::iterator b = s.begin();
	std::cout << "Begin" << std::endl;
	std::cout << "iterator b = stack.begin()" << std::endl;
	std::cout << "*b = " << *b << std::endl;
	std::cout << "*--b = " << *--b << std::endl;
	std::cout << "*--b = " << *--b << std::endl;
	std::cout << "*--b = " << *--b << std::endl;
	std::cout << "*--b = " << *--b << std::endl;
	std::cout << "*++b = " << *++b << std::endl;
	std::cout << "*++b = " << *++b << std::endl;
	std::cout << "*++b = " << *++b << std::endl;
	std::cout << "*++b = " << *++b << std::endl;
	std::cout << "*++b = " << *++b << std::endl;
	std::cout << "*(b++) = " << *(b++) << std::endl;
	std::cout << "*b = " << *b << std::endl;
	std::cout << "*(++b) = " << *(++b) << std::endl;
	
	std::cout << "\nEnd" << std::endl;
	MutantStack<int>::iterator e = s.end();
	std::cout << "iterator e = stack.end()" << std::endl;
	std::cout << "*(++e) = " << *(++e) << std::endl;
	std::cout << "*(++e) = " << *(++e) << std::endl;
	std::cout << "*(++e) = " << *(++e) << std::endl;
	std::cout << "*(++e) = " << *(++e) << std::endl;
	std::cout << "*e = " << *e << std::endl;
	std::cout << "*(e--) = " << *(e--) << std::endl;
	std::cout << "*e = " << *e << std::endl;
	std::cout << "*(--e) = " << *(--e) << std::endl;
}

// int main ()
// {
// 	std::vector<int> myvector;
// 	for (int i=1; i<=5; i++) myvector.push_back(i);

// 	std::cout << "myvector contains:";
// 	std::vector<int>::iterator it = myvector.begin();	
// 	std::cout << ' ' << *it;
// 	std::cout << ' ' << *--it;
// 	std::cout << ' ' << *--it;
// 	std::cout << ' ' << *--it;
// 	std::cout << ' ' << *--it;
// 	std::cout << ' ' << *--it;
// 	std::cout << ' ' << *++it;
// 	std::cout << ' ' << *++it;
// 	std::cout << ' ' << *++it;
// 	std::cout << ' ' << *++it;
// 	std::cout << '\n';

// 	return 0;
// }