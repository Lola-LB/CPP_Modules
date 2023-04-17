/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:15:52 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/16 20:21:48 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// Constructors
Data::Data()
{
	_index = 0;
	_name = "";
}

Data::Data(int index, std::string name)
{
	_index = index;
	_name = name;
}

Data::Data(const Data &copy)
{
	_index = copy._index;
	_name = copy._name;
}

// Destructor
Data::~Data()
{
}

// Operators
Data & Data::operator=(const Data &assign)
{
	_index = assign._index;
	_name = assign._name;
	return *this;
}
