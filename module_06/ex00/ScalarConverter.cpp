/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:09:48 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/24 12:10:37 by lle-bret         ###   ########.fr       */
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

Type	ScalarConverter::isInt(std::string literal)
{
	std::ostringstream oss_max;
	std::ostringstream oss_min;
    oss_max << std::numeric_limits<int>::max();
    oss_min << std::numeric_limits<int>::min();
	std::string max = oss_max.str();
	std::string min = oss_min.str();

	if (literal[0] != '-' && (literal.length() > max.length()
		|| (literal.length() == max.length() && literal.compare(max) > 0)))
		return (isDouble(literal));
	if (literal[0] == '-' && (literal.length() > min.length()
		|| (literal.length() == min.length() && literal.compare(min) < 0)))
		return (isDouble(literal));
	return (INT);
}

Type	ScalarConverter::isFloat(std::string literal)
{
	(void) literal;
	return (isDouble(literal));
}

Type	ScalarConverter::isDouble(std::string literal)
{
	std::ostringstream oss_max;
	std::ostringstream oss_min;
    oss_max << std::numeric_limits<double>::max();
    oss_min << std::numeric_limits<double>::min();
	std::string max = oss_max.str();
	std::string min = oss_min.str();

	if (literal[0] != '-' && (literal.length() > max.length()
		|| (literal.length() == max.length() && literal.compare(max) > 0)))
		return (isDouble(literal));
	if (literal[0] == '-' && (literal.length() > min.length()
		|| (literal.length() == min.length() && literal.compare(min) < 0)))
		return (isDouble(literal));
	return (DOUBLE);
}

void ScalarConverter::convert(std::string literal)
{
	std::string	c_err = "";
	std::string	i_err = "";
	std::string	f_err = "";
	std::string	d_err = "";
	char		c = 0;
	int			i = 0;
	float		f = 0.0f;
	double		d = 0.0;

	switch (ScalarConverter::getType(literal))
	{
	case CHAR:
		c = static_cast<char>(literal[0]);
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
		break;
	case INT:
	case FLOAT:
	case DOUBLE:
		d = atof(literal.c_str());
		c = static_cast<char>(d);
		if (d > INT_MAX || d < INT_MIN)
			i_err = "impossible";
		if ((d * (d > 0) - d * (d < 0)) > std::numeric_limits<float>::max()
			|| (d > 0 && d < std::numeric_limits<float>::min()))
			f_err = "impossible";
		i = static_cast<int>(d);
		f = static_cast<float>(d);
		break;
	case T_NAN:
		d = nan("");
		f = nanf("");
		c_err = "impossible";
		i_err = "impossible";
		break;
	case M_INF:
	case P_INF:
		d_err = literal;
		f_err = literal + "f";
		c_err = "impossible";
		i_err = "impossible";
		break;
	case ERROR:
		d_err = "impossible";
		f_err = "impossible";
		c_err = "impossible";
		i_err = "impossible";
		break;
	default:
		break;
	}
	if ((c < 32 || c > 127) && c_err == "")
		c_err = "Non displayable";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "char: ";
	if (c_err == "")
		std::cout << c;
	std::cout << c_err << std::endl << "int: ";
	if (i_err == "")
		std::cout << i;
	std::cout << i_err << std::endl << "float: ";
	if (f_err == "")
		std::cout << f << "f";
	std::cout << f_err << std::endl
			  << "double: ";
	if (d_err == "")
		std::cout << d;
	std::cout << d_err << std::endl;
}

Type	ScalarConverter::getType(std::string literal)
{
	int	dot = 0;

	// Char
	if (literal.length() == 1 && !std::isdigit(literal[0]))
		return (CHAR);
	if (literal == "nan")
		return (T_NAN);
	if (literal == "-inf")
		return (M_INF);
	if (literal == "+inf")
		return (P_INF);
	// Float
	for (size_t i = 0; i < literal.length(); i++)
	{
		if (literal[i] == '.')
			++dot;
		if (literal[i] == 'f' && i == literal.length() - 1)
			return (FLOAT);
		if (!std::isdigit(literal[i]) && !(literal[i] == '.' && dot == 1)
				&& !(i == 0 && literal[0] == '-'))
			return (ERROR);
	}
	// Int
	if (dot == 0)
		return (INT);
	
	// Double
	return (isDouble(literal));
}
