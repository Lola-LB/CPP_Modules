/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:30:01 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/16 23:31:32 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"
# include "Serializer.hpp"
# include <iomanip>

int	main()
{
	Data		*ptr = new Data(42, "lle-bret");
	uintptr_t	i = Serializer::serialize(ptr);
	
	std::cout << std::endl;
	std::cout << std::setw(20) << std::left << "original ptr: ";
	std::cout << std::setw(20) << std::left << ptr << std::endl;
	std::cout << std::setw(20) << std::left << "Data content: ";
	std::cout << std::setw(5) << std::left << ptr->_index << ptr->_name << std::endl;
	std::cout << std::setw(20) << std::left << std::endl << "raw int: ";
	std::cout << std::setw(20) << std::left << i << std::endl << std::endl;

	ptr = Serializer::deserialize(i);
	
	std::cout << std::setw(20) << std::left << "deserialized ptr: ";
	std::cout << std::setw(20) << std::left << ptr << std::endl;
	std::cout << std::setw(20) << std::left << "Data content: ";
	std::cout << std::setw(5) << std::left << ptr->_index << ptr->_name << std::endl;
	std::cout << std::endl;
}