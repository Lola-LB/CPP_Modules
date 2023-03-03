/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:35:38 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 11:41:56 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main(void)
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string&	stringREF = str;

	cout << "memory address of the string variable: " << &str << endl
		 << "memory address held by stringPTR: " << stringPTR << endl
		 << "memory address held by stringREF: " << &stringREF << endl
		 << "value of the string variable: " << str << endl
		 << "value pointed to by stringPTR: " << *stringPTR << endl
		 << "value pointed to by stringREF: " << stringREF << endl;
}