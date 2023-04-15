/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:09:48 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/15 14:26:32 by lle-bret         ###   ########.fr       */
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
	std::string max = std::to_string(std::numeric_limits<int>::max());
	std::string min = std::to_string(std::numeric_limits<int>::min());

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
	std::string max = std::to_string(std::numeric_limits<double>::max());
	std::string min = std::to_string(std::numeric_limits<double>::min());

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
		try
		{
			i = stoi(literal);
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
		}
		catch (const std::exception& e)
		{
			i_err = "impossible";
			try
			{
				f = stof(literal);
				d = static_cast<double>(f);
			}
			catch (const std::exception& e)
			{
				f_err = "impossible";
				try
				{
					d = stod(literal);
				}
				catch (const std::exception& e)
				{
					d_err = "impossible";
				}
			}	
		}
		break;
	case FLOAT:
		try
		{
			f = stof(literal);
			c = static_cast<char>(f);
			i = static_cast<int>(f);
			d = static_cast<double>(f);
			break;
		}
		catch (const std::exception& e)
		{
			d_err = "impossible";
			f_err = "impossible";
			c_err = "impossible";
			i_err = "impossible";	
		}
		break;
	case DOUBLE:
		try
		{
			d = stod(literal);
			c = static_cast<char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
		}
		catch (const std::exception& e)
		{
			d_err = "impossible";
			f_err = "impossible";
			c_err = "impossible";
			i_err = "impossible";
		}
		break;
	case T_NAN:
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
	}
	std::cout << std::fixed << std::setprecision(1) << "char: ";
	if (isprint(c))
		std::cout << c;
	else if (c_err == "")
		std::cout << "Non displayable";
	std::cout << c_err << std::endl << "int: ";
	if (i_err == "")
		std::cout << i;
	std::cout << i_err << std::endl << "float: ";
	if (f_err == "")
		std::cout << f << "f";
	std::cout << f_err << std::endl << "double: ";
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
		return (isInt(literal));
	
	// Double
	return (isDouble(literal));
}
