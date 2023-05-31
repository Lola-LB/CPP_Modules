/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:21:38 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/31 14:28:56 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	singleOP(std::stack<unsigned long> & s, char c)
{
	unsigned long	n;
	unsigned long	m;

	if (s.empty())
		return(false);
	m = s.top();
	s.pop();
	if (s.empty())
		return(false);
	n = s.top();
	s.pop();
	switch (c)
	{
		case '+':
			s.push(n + m);
			break;
		case '-':
			s.push(n - m);
			break;
		case '*':
			s.push(n * m);
			break;
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
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int	calculateRPN(std::string rpn)
{
	std::stack<unsigned long>	s;
	std::stringstream			ss(rpn);
	unsigned long				n;

	while (std::getline(ss, rpn, ' '))
	{
		if (is_number(rpn)
			&& std::stringstream(rpn) >> n
			&& n < 10 && n >= 0)
		{
			s.push(n);
		}
		else if (rpn.size() != 1 || !singleOP(s, rpn[0]))
		{
			std::cerr << "Error" << std::endl;
			return 1;
		}
	}
	n = s.top();
	s.pop();
	if (!s.empty())
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}
	std::cout << n << std::endl;
	return 0;
}