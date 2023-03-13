/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:09:48 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/13 12:49:28 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Constructors
ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void) copy;
}

// Destructor
ScalarConverter::~ScalarConverter()
{
}

// Operators
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
{
	(void) assign;
	return *this;
}

void ScalarConverter::convert(std::string literal)
{
	char	c;
	int		i;
	float	f;
	double	d;

	switch (ScalarConverter::getType(literal))
	{
	case CHAR:
		c = literal[0];
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
		break;
	case INT:
		i = stoi(literal);
		c = static_cast<char>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
		break;
	case FLOAT:
		f = stof(literal);
		c = static_cast<char>(f);
		i = static_cast<int>(f);
		d = static_cast<double>(f);
		break;
	case DOUBLE:
		d = stod(literal);
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f = static_cast<float>(d);
		break;
	default:
		break;
	}
	
	std::cout << "char: " << c << std::endl
			  << "int: " << i << std::endl
			  << "float: " << f << "f" << std::endl
			  << "double: " << d << std::endl;
}

Type	ScalarConverter::getType(std::string literal)
{
	int	i = 0;
	int	dot = 0;

	// Char
	if (literal.length() == 1 && !std::isdigit(literal[0]))
	{
		if (literal[0] < 32 || literal[0] > 127)
			return (NON_DISPLAYABLE);
		return (CHAR);
	}
	if (literal == "nanf" || literal == "-inff" || literal == "+inff")
		return (FLOAT);
	if (literal == "nan" || literal == "-inf" || literal == "+inf")
		return (DOUBLE);
	
	// Float and doubles
	for (size_t i = 0; i < literal.length(); i++)
	{
		if (literal[i] == '.')
			++dot;
		if (literal[i] == 'f' && i == literal.length() - 1)
			return (FLOAT);
		if (!std::isdigit(literal[i])
			&& !(literal[i] == '.' && dot == 1))
			return (IMPOSSIBLE);
	}
	
	// Int
	if (dot == 0)
		return (INT);
	
	return (DOUBLE);
}
