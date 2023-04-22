/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:21:38 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/22 12:02:39 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	singleOP(std::stack<int> & s, char c)
{
	int	n;
	int	m;

	m = s.top();
	s.pop();
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
			{
				std::cerr << "Error" << std::endl;
				return (false);
			}
			s.push(n / m);
			break;
		default:
			std::cerr << "Error" << std::endl;
			return (false);
	}
	return (true);
}

void	calculateRPN(std::string rpn)
{
	std::stack<int>		s;
	std::stringstream	ss(rpn);
	int					n;

	try
	{
		while (std::getline(ss, rpn, ' '))
		{
			if (std::all_of(rpn.begin(), rpn.end(), ::isdigit)
				&& std::stringstream(rpn) >> n
				&& n < 10 && n >= 0)
			{
				s.push(n);
			}
			else if (rpn.size() == 1)
			{
				if (!singleOP(s, rpn[0]))
					return ;
			}
			else
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
		}
		n = s.top();
		s.pop();
		if (!s.empty())
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
		std::cout << n << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error" << std::endl;
		return ;
	}
}