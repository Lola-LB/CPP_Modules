/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:09:53 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/15 17:06:00 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>
# include <climits>
# include <limits>

enum Type 
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	T_NAN,
	M_INF,
	P_INF,
	ERROR
};

class ScalarConverter
{
	public:
		// Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		
		// Destructor
		~ScalarConverter();
		
		// Operators
		ScalarConverter & operator=(const ScalarConverter &assign);
		
		static void convert(std::string literal);

		static Type	getType(std::string literal);

		static Type	isInt(std::string literal);
		static Type	isFloat(std::string literal);
		static Type	isDouble(std::string literal);
	};

#endif