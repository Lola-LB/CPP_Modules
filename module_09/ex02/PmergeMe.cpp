/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:11:06 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/24 11:36:44 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* ************************************************************************** */
/*                                std::list                                   */
/* ************************************************************************** */

std::list<unsigned int>	listProcess(char *str)
{
	unsigned int			n;
	std::string 			s;
	std::stringstream		ss(str);
	std::list<unsigned int>	list;

	while (std::getline(ss, s, ' '))
	{
		if (!(std::stringstream(s) >> n))
		{
			std::cerr << "Input must be a list of unsigned integers" << std::endl;
			exit(1);
		}
		list.push_back(n);
	}
	return (list);
}


std::list<unsigned int>	mergeSort(std::list<unsigned int> list)
{
	if (list.size() <= 2)
	{
		list.sort();
		return (list);
	}
	else
	{
		std::list<unsigned int> list2;
		std::list<unsigned int>::iterator it = list.begin();
		for (size_t i = 0; i < list.size() / 2; i++)
			++it;
		list2.splice(list2.begin(), list, list.begin(), it);
		list = mergeSort(list);
		list2 = mergeSort(list2);
		list.merge(list2);
	}
	return (list);
}

std::list<unsigned int>	listSort(char *str, double *time)
{
	clock_t					start, end;
	std::list<unsigned int>	list;
	
	start = clock();
	list = listProcess(str);
	list = mergeSort(list);
	list.unique();
	end = clock();
	*time = double(end - start) / double(CLOCKS_PER_SEC);
	return (list);
}

/* ************************************************************************** */
/*                            std::forward_list                               */
/* ************************************************************************** */

std::forward_list<unsigned int>	flistProcess(char *str)
{
	unsigned int			n;
	std::string 			s;
	std::stringstream		ss(str);
	std::forward_list<unsigned int>	list;

	while (std::getline(ss, s, ' '))
	{
		if (!(std::stringstream(s) >> n))
		{
			std::cerr << "Input must be a list of positive integers" << std::endl;
			exit(1);
		}
		list.push_front(n);
	}
	return (list);
}

std::forward_list<unsigned int>	fmergeSort(std::forward_list<unsigned int> list)
{
	if (std::distance(list.begin(), list.end()) <= 2)
	{
		list.sort();
		return (list);
	}
	else
	{
		std::forward_list<unsigned int> list2;
		for (long i = 0; i < std::distance(list.begin(), list.end()) / 2; i++)
		{
			list2.push_front(list.front());
			list.pop_front();
		}
		list = fmergeSort(list);
		list2 = fmergeSort(list2);
		list.merge(list2);
	}
	return (list);
}

std::forward_list<unsigned int>	flistSort(char *str, double *time)
{
	clock_t							start, end;
	std::forward_list<unsigned int>	list;

	start = clock();
	list = flistProcess(str);
	list = fmergeSort(list);
	list.unique();
	end = clock();
	*time = double(end - start) / double(CLOCKS_PER_SEC);
	return (list);
}
