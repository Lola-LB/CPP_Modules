/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:49:05 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/17 14:15:38 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
const int & easyfind(const T & container, int n)
{
	for (typename T::const_iterator it = container.begin(); it != container.end(); ++it)
	{
		if (*it == n)
			return (*it);
	}
	throw std::out_of_range("Non existent element");
}

#endif