/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:35:38 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/16 15:30:09 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string &	stringREF = str;

	std::cout << "memory address of the string variable: " << &str << std::endl
		 << "memory address held by stringPTR: " << stringPTR << std::endl
		 << "memory address held by stringREF: " << &stringREF << std::endl
		 << "value of the string variable: " << str << std::endl
		 << "value pointed to by stringPTR: " << *stringPTR << std::endl
		 << "value pointed to by stringREF: " << stringREF << std::endl;
}