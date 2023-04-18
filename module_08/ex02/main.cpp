/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:58:36 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/19 00:20:23 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <list>

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
	std::cout << "*++b = " << *++b << std::endl;
	std::cout << "*++b = " << *++b << std::endl;
	std::cout << "*(b++) = " << *(b++) << std::endl;
	std::cout << "*b = " << *b << std::endl;
	std::cout << "*(++b) = " << *(++b) << std::endl;
	std::cout << "*++b = " << *++b << std::endl;
	std::cout << "*++b = " << *++b << std::endl;
	std::cout << "*++b = " << *++b << std::endl;
	std::cout << "*++b = " << *++b << std::endl;
	
	std::cout << "\nEnd" << std::endl;
	MutantStack<int>::iterator e = s.end();
	std::cout << "iterator e = stack.end()" << std::endl;
	std::cout << "*e = " << *e << std::endl;
	std::cout << "*(++e) = " << *(++e) << std::endl;
	std::cout << "*(--e) = " << *(--e) << std::endl;
	std::cout << "*(e--) = " << *(e--) << std::endl;
	std::cout << "*e = " << *e << std::endl;
	std::cout << "*(--e) = " << *(--e) << std::endl;

	std::cout << std::endl << "Other tests" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> st(mstack);

	std::cout << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator li = mlist.begin();
	std::list<int>::iterator lie = mlist.end();
	++li;
	--li;
	while (li != lie)
	{
		std::cout << *li << std::endl;
		++li;
	}
	std::list<int> l(mlist);
	return 0;
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
