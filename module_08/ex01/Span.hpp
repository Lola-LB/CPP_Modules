/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:05:49 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/30 16:01:53 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <iterator>
# include <cstdlib>

class Span
{
	public:
		// Constructors
		Span( unsigned int n );
		Span( const Span &copy );
		
		// Destructor
		~Span( void );
		
		// Other
		void	addNumber( int number );
		void	addRange( std::vector<int>::iterator first, std::vector<int>::iterator last );
		int		shortestSpan( void );
		int		longestSpan( void );
		
	private:
		Span( void );
		
		// Operators
		Span &	operator=( const Span &assign );
		
		std::vector<int>	_stock;
		const unsigned int	_N;
};

#endif