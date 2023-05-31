/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:03:26 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/31 14:07:14 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <iomanip>
# include <fstream>
# include <sstream>
# include <string>
# include <map>
# include <ctime>

typedef std::map < std::string, double > priceMap_t;
typedef std::map < std::string, double > priceMap_t;

std::tm 	getDate(std::string input);
int			compDate(std::tm date, std::tm d);
priceMap_t	getPriceMap(std::ifstream & db, const char delim);
void		computePrices(priceMap_t & prices, std::ifstream & input);
double		findPrice(priceMap_t & prices, std::tm date);

#endif