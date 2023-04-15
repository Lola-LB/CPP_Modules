/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:14:44 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/14 14:03:22 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat alice("Alice", 1);
	std::cout << alice << std::endl;
	Bureaucrat bob("Bob", 100);
	std::cout << bob << std::endl;
	Form	f1("Nuclear war", false, 2, 1);
	std::cout << f1 << std::endl;
	bob.signForm(f1);
	alice.signForm(f1); std::cout << f1 << std::endl;
}