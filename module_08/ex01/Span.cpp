/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:05:45 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/17 21:08:48 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors
Span::Span( void )
{
}

Span::Span( unsigned int n )
{
}

Span::Span( const Span &copy )
{
	( void ) copy;
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

