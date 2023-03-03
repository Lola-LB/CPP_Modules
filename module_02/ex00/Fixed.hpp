/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:56:44 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/02 13:10:15 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int RawBits);

		// Destructor
		~Fixed();

		// Operators
		Fixed & operator=(const Fixed &assign);

		// Getters / Setters
		int getRawBits() const;
		void setRawBits( int const raw );
		
	private:
		int _RawBits;
		static const int _FracBits = 8;		
};

#endif