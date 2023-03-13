/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:09:53 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/13 12:47:55 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

enum Type 
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NAN,
	NANF,
	M_INF,
	P_INF,
	IMPOSSIBLE,
	NON_DISPLAYABLE
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

		static Type	isChar(std::string literal);
		static Type	isInt(std::string literal);
		static Type	isFloat(std::string literal);
		static Type	isDouble(std::string literal);
	};

#endif