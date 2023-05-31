/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:21:38 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/31 14:38:19 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	singleOP(std::stack<long> & s, char c)
{
	long	n;
	long	m;

	if (s.size() < 2)
		return(false);
	m = s.top();
	s.pop();
	n = s.top();
	s.pop();
	switch (c)
	{
		case '+': s.push(n + m); break;
		case '-': s.push(n - m); break;
		case '*': s.push(n * m); break;
		case '/':
			if ( m == 0 )
				return (false);
			s.push(n / m);
			break;
		default:
			return (false);
	}
	return (true);
}

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it))
		++it;
    return (!s.empty() && it == s.end());
}

int	calculateRPN(std::string rpn)
{
	std::stack<long>	s;
	std::stringstream	ss(rpn);
	long				n;

	while (std::getline(ss, rpn, ' '))
	{
		if (is_number(rpn)
			&& std::stringstream(rpn) >> n
			&& n < 10 && n >= 0)
		{
			s.push(n);
		}
		else if (rpn.size() != 1 || !singleOP(s, rpn[0]))
			return 1;
	}
	n = s.top();
	s.pop();
	if (!s.empty())
		return 1;
	std::cout << n << std::endl;
	return 0;
}