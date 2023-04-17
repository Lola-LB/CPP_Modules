/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:31:22 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/17 11:43:01 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template < typename T >
void	swap( T & a, T & b )
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template < typename T >
T const &	min( T const & a, T const & b )
{
	return ( ( a < b ) ? a : b );
}

template < typename T >
T const &	max( T const & a, T const & b )
{
	return ( ( a > b ) ? a : b );
}

#endif