/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:15:57 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/26 16:52:51 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>

# include "Data.hpp"

typedef unsigned long int uintptr_t;

class Serializer
{
	// Constructors
	Serializer();
	Serializer(const Serializer &copy);
	
	public :
		
		// Destructor
		~Serializer();
		
		// Operators
		Serializer & operator=(const Serializer &assign);
		
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif