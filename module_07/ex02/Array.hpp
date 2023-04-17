/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:03:12 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/17 12:31:29 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template < typename T >
class Array
{
	private:
		int	_n;
		T * _ar;
	
	public:
		// Constructor
		Array( unsigned int n ) : _n(n), _ar(new T[n]()) {};

		Array( void ) : _ar(new T()), _n(0) {};

		Array ( Array const & copy)
		{
			_n = copy.size();
			_ar = new T[_n]();
			for (int i = 0; i < _n; i++)
				_ar[i] = copy[i];
		};

		// Destructor
		~Array(){ delete _ar; };

		// Operator
		Array & operator=(Array const & assign)
		{
			delete _ar;
			_n = assign.size();
			_ar = new T[_n]();
			for (int i = 0; i < _n; i++)
				_ar[i] = assign[i];
		}

		T & operator[](int i) const
		{
			if (i >= _n || i < 0)
				throw std::out_of_range("Index out of bounds");
			return (_ar[i]);
		}

		// Member functions
		int size( void ) const { return (_n); }
};


#endif