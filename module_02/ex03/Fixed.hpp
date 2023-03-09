/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:56:44 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:16:12 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>



class Fixed
{
	public:
		// Constructors
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed(const int n);
		Fixed(const float f);

		// Destructor
		~Fixed(void);

		// Operators
		Fixed &					operator=(const Fixed &assign);
		friend std::ostream&			operator<<(std::ostream& os, const Fixed& f);

		Fixed 					operator+(const Fixed &a) const;
		Fixed					operator-(const Fixed &a) const;
		Fixed					operator*(const Fixed &a) const;
		Fixed					operator/(const Fixed &a) const;

		Fixed					operator++(int i);
		Fixed					operator--(int i);
		Fixed &					operator++(void);
		Fixed &					operator--(void);

		bool 					operator<(const Fixed &a) const;
		bool 					operator>(const Fixed &a) const;
		bool 					operator<=(const Fixed &a) const;
		bool 					operator>=(const Fixed &a) const;
		bool 					operator==(const Fixed &a) const;
		bool 					operator!=(const Fixed &a) const;

		// Getters / Setters
		int 					getRawBits() const;
		void 					setRawBits( int const raw );

		// Other member functions
		float 					toFloat( void ) const;
		int						toInt( void ) const;

		static Fixed &			min(Fixed& a, Fixed& b);
		static Fixed &			max(Fixed& a, Fixed& b);
		
		static const Fixed &	min(const Fixed& a, const Fixed& b);
		static const Fixed &	max(const Fixed& a, const Fixed& b);
		
	private:
		int 				_RawBits;
		static const int	_FracBits = 8;
};

#endif