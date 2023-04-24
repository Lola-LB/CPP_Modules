/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:11:19 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/24 11:33:44 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		double time = 0;
		double ftime = 0;
		std::list<unsigned int> list = listSort(av[1], &time);
		std::forward_list<unsigned int> flist = flistSort(av[1], &ftime);
		std::cout << std::setw(10) << std::left << "Before: ";
		std::cout << av[1] << std::endl;
		std::cout << std::setw(10) << std::left << "After: ";
		for (std::list<unsigned int>::iterator i = list.begin(); i != list.end() ; i++)
			std::cout << *i << " ";
		std::cout << std::setprecision(6) << std::fixed << std::endl
				  << "Time to process a range of " << list.size()
				  << " elements with std::list : " << time << " sec" << std::endl
				  << "Time to process a range of " << list.size()
				  << " elements with std::forward_list : " << ftime << " sec" << std::endl;
		return (0);
	}
	else
	{
		std::cerr << "Expected input list of positive integers." << std::endl;
		return (1);
	}
}