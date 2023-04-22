/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:03:20 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/22 10:59:11 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	(void) ac;
	std::ifstream data("data.csv");
	if (data.fail())
		std::cerr << "Error: " << std::strerror(errno) << std::endl;
	valVect_t prices = valVect(data, ',');
	std::ifstream input(av[1]);
	if (input.fail())
		std::cerr << "Error: " << std::strerror(errno) << std::endl;
	valVect_t quantities = valVect(input, '|');
	computePrices(prices, quantities);
	input.close();
}