/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:15:55 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/16 20:35:40 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Constructors
Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &copy)
{
	(void) copy;
}


// Destructor
Serializer::~Serializer()
{
}


// Operators
Serializer & Serializer::operator=(const Serializer &assign)
{
	(void) assign;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t	i = reinterpret_cast<uintptr_t>(ptr);
	return (i);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data	*ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}