/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:03:26 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/22 11:09:25 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <sstream>
# include <string>
# include <vector>
# include <ctime>

typedef std::vector < std::pair < std::string, double > > valVect_t;

valVect_t	valVect(std::ifstream & db, const char delim);
void		computePrices(valVect_t & prices, const valVect_t & quantities);
double		findPrice(valVect_t & prices, std::time_t date);

#endif