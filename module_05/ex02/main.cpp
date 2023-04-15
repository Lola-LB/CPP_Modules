/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:14:44 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/14 19:01:53 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat alice("Alice", 1);
	Bureaucrat bob("Bob", 100);
	PresidentialPardonForm f1("Julien Assange");
	RobotomyRequestForm f2("Donald Trump");
	ShrubberyCreationForm f3("Tree");
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << f3 << std::endl;
	alice.signForm(f1);
	bob.executeForm(f2);
	bob.signForm(f2);
	alice.signForm(f2);
	alice.signForm(f3);
	alice.executeForm(f1);
	alice.executeForm(f2);
	alice.executeForm(f3);
}