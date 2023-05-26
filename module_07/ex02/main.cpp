/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:55:10 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/26 17:03:40 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 10

int main(int, char**)
{
	std::cout << "/************************/" << std::endl;
	std::cout << "/*          INT         */" << std::endl;
	std::cout << "/************************/" << std::endl;
	std::cout << std::endl;
	
    Array<int> numbers(MAX_VAL);
    
	// Initializing arrays
	srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 100;
        numbers[i] = value;
    }

    Array<int> numbers_copy(numbers);
    Array<int> numbers_equal = numbers;
	
	print_array(numbers);
	print_array(numbers_copy);
	print_array(numbers_equal);
	
    std::cout << std::endl;

	numbers[0] = 0;
	
	print_array(numbers);
	print_array(numbers_copy);
	print_array(numbers_equal);

    std::cout << std::endl;

	// Bounds
	try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Array<int> empty;
	try
    {
		std::cout << empty.size() << std::endl; 
		std::cout << empty[0] << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	
    // Scope
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

	std::cout << std::endl;
	std::cout << "/************************/" << std::endl;
	std::cout << "/*          STR         */" << std::endl;
	std::cout << "/************************/" << std::endl;
	std::cout << std::endl;

	Array<std::string> str(MAX_VAL);
    
	// Initializing arrays
    for (int i = 0; i < MAX_VAL; i++)
    {
       str[i] = "Hello world";
    }

    Array<std::string> str_equal = str;
    Array<std::string> str_copy(str);
	
	print_array(str);
	print_array(str_copy);
	print_array(str_equal);
	
    std::cout << std::endl;

	str[0] = "COUCOU";
	
	print_array(str);
	print_array(str_copy);
	print_array(str_equal);
	
    std::cout << std::endl;

	// Bounds
	try
    {
        str[-2] = "";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        str[MAX_VAL] = "";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Array<std::string> empty_str;
	try
    {
		std::cout << empty_str.size() << std::endl; 
		std::cout << empty_str[0] << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	
    // Scope
    {
        Array<std::string> tmp = str;
        Array<std::string> test(tmp);
    }
	
    return 0;
}