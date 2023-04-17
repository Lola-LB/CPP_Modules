/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 23:33:18 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/16 23:59:35 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		A();
};

class B : public Base
{
	public:
		B();
};

class C : public Base
{
	public:
		C();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif