/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:05:49 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/17 21:08:16 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>

class Span
{
	public:
		// Constructors
		Span( unsigned int n );
		Span( const Span &copy );
		
		// Destructor
		~Span( void );
		
		// Operators
		Span &	operator=( const Span &assign );

		// Other
		void	addNumber( int number );
		int		shortestSpan( void );
		int		longestSpan( void );
		
	private:
		Span( void );
		
};

#endif