/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:03:28 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/22 11:19:27 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// bool isFloatNumber(const std::stringstream ss)
// {
// 	if (ss.)
// }

valVect_t	valVect(std::ifstream & db, const char delim)
{
	valVect_t	valVect;
    std::string	line;
    double 		value;

    while (std::getline(db, line))
	{
		std::stringstream ss (line);
		std::getline(ss, line, delim);
		if (!(ss >> value))
			value = -1;
		std::string::iterator end_pos = std::remove(line.begin(), line.end(), ' ');
		line.erase(end_pos, line.end());
		valVect.push_back(std::pair < std::string, double > (line, value));
    }
	return (valVect);
}

double		findPrice(valVect_t & prices, const std::time_t date)
{
	std::tm		t = {};
	std::time_t	d;
	double		price = prices.begin()->second;

	for (valVect_t::iterator it = prices.begin(); it != prices.end(); ++it)
	{
		std::istringstream ss(it->first);
		ss >> std::get_time(&t, "%Y-%m-%d");
		d = std::mktime(&t);
		if (d == date)
			return (it->second);
		if (d > date)
			return (price);
		price = it->second;
	}
	return (price);
}

void	computePrices(valVect_t & prices, valVect_t & quantities)
{
	double	price;
	std::tm	date = {};

	for (valVect_t::iterator it = quantities.begin(); it != quantities.end(); ++it)
	{
		if (it->first == "date")
			continue;
		std::istringstream ss(it->first);
		ss >> std::get_time(&date, "%Y-%m-%d");
		if (ss.fail())
			std::cerr << "Error: bad input" << " => " << it->first << std::endl;
		else if (it->second < 0)
			std::cerr << "Error: not a positive number." << std::endl;
		else if (it->second > 1000)
			std::cerr << "Error: too large a number." << std::endl;
		else
		{
			price = findPrice(prices, std::mktime(&date));
			std::cout << std::defaultfloat << it->first << " => "
					  << it->second << " = " << std::setprecision(10) << price * it->second << std::endl;
		}
	}
}
