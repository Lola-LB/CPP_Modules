/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 23:33:19 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/17 00:02:09 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}
A::A(){}
B::B(){}
C::C(){}

Base * generate(void)
{
	int	rd;

	srand (time(NULL));
	rd = rand();
	if (rd % 3 == 0)
		return (new A());
	else if (rd % 3 == 1)
		return (new B());
	else
		return (new C());	
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	(void) p;
}
