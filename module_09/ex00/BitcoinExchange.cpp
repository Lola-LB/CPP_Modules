/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:03:28 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/31 14:14:09 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	validDate(std::tm date)
{
	static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = daysInMonth[date.tm_mon - 1];
	std::tm min_date = {};

	min_date.tm_year = 2009;
	min_date.tm_mon = 01;
	min_date.tm_mday = 02;
    if (date.tm_mon == 2 && (date.tm_year % 4 == 0
		&& (date.tm_year % 100 != 0 || date.tm_year % 400 == 0)))
        days = 29;
	return (date.tm_year > 2008
		&& date.tm_mon > 0 && date.tm_mon < 13
		&& date.tm_mday > 0 && date.tm_mday < days
		&& compDate(date, min_date) >= 0);
}

std::tm 	getDate(std::string input)
{
	std::istringstream	iss(input);
	std::tm				date;
    char				delimiter;

    if (!(iss >> date.tm_year >> delimiter && delimiter == '-'
		&& iss >> date.tm_mon >> delimiter >> date.tm_mday && delimiter == '-' )
		|| !validDate(date))
	{
		date.tm_year = -1;
	}
	return date;
}

int	compDate(std::tm date, std::tm d)
{
	return (100 * ((date.tm_year > d.tm_year) - (date.tm_year < d.tm_year))
		+ 10 * ((date.tm_mon > d.tm_mon) - (date.tm_mon < d.tm_mon)) 
		+ ((date.tm_mday > d.tm_mday) - (date.tm_mday < d.tm_mday)));
}

priceMap_t	getPriceMap(std::ifstream & db, const char delim)
{
	priceMap_t	valMap;
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
		valMap.insert(std::pair<std::string, double>(line, value));
    }
	return (valMap);
}

double		findPrice(priceMap_t & prices, std::tm date)
{
	std::tm		d = {};
	int			compare;
	double		price = prices.begin()->second;

	for (priceMap_t::iterator it = prices.begin(); it != prices.end(); ++it)
	{
		d = getDate(it->first);
		compare = compDate(date, d);
		if (compare == 0)
			return (it->second);
		else if (compare < 0)
			return (price);
		price = it->second;
	}
	return (price);
}

void	computePrices(priceMap_t & prices, std::ifstream & input)
{
	double		price;
	std::tm		date = {};
	std::string	line;
	std::string	test;
    double 		value;

    while (std::getline(input, line))
	{
		if (line == "date | value")
			continue;
		std::stringstream ss (line);
		std::getline(ss, line, '|');
		if (!(ss >> value) || (ss >> test))
			value = -1;
		date = getDate(line);
		if (date.tm_year == -1)
			std::cerr << "Error: bad input" << " => " << line << std::endl;
		else if (value < 0)
			std::cerr << "Error: not a positive number." << std::endl;
		else if (value > 1000)
			std::cerr << "Error: too large a number." << std::endl;
		else
		{
			price = findPrice(prices, date);
			std::cout.unsetf(std::ios_base::floatfield);
			std::cout << line << "=> "
					  << value << " = " << std::setprecision(10)
					  << price * value << std::endl;
		}
	}
}
