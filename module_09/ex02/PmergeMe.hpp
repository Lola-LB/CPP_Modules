/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:11:31 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/24 11:12:39 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include <ctime>
# include <algorithm>
# include <list>
# include <forward_list>
# include <set>

std::list<unsigned int>	listProcess(char *str);
std::list<unsigned int>	mergeSort(std::list<unsigned int> list);
std::list<unsigned int>	listSort(char *str, double *time);

std::forward_list<unsigned int>	flistProcess(char *str);
std::forward_list<unsigned int>	fmergeSort(std::forward_list<unsigned int> forward_list);
std::forward_list<unsigned int>	flistSort(char *str, double *time);

#endif