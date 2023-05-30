/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:05:45 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/30 15:56:48 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors
Span::Span( void ) : _N(0)
{
}

Span::Span( unsigned int n ) : _N(n)
{	
}

Span::Span( const Span &copy ) : _N(copy._N)
{
}


// Destructor
Span::~Span(  )
{
}


// Operators
Span & Span::operator=( const Span &assign )
{
	( void ) assign;
	return *this;
}

// Other
void	Span::addNumber( int number )
{
	if (_stock.size() == _N)
		throw std::length_error("Span is full.");
	_stock.push_back(number);
}

void	Span::addRange( std::vector<int>::iterator first, std::vector<int>::iterator last )
{
	if (std::distance(first, last) + _stock.size() > _N)
		throw std::length_error("Not enough space in span.");
	_stock.insert(_stock.end(), first, last);
}

int		Span::shortestSpan( void )
{
	std::vector<int> copy(_stock);
	std::vector<int>::iterator it;
	std::sort(copy.begin(), copy.end());
	for (it = copy.end(); it != copy.begin(); --it)
	{
		*it -= *(it - 1);
		*it = std::abs(*it); 
	}
	return (*std::min_element(copy.begin() + 1, copy.end()));
}

int		Span::longestSpan( void )
{
	std::vector<int>::iterator min= std::min_element(_stock.begin(), _stock.end());
	std::vector<int>::iterator max = std::max_element(_stock.begin(), _stock.end());
	return (*max - *min);
}
