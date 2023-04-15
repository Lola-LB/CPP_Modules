/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:14:28 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/15 18:03:08 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors
Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
}


// Destructor
Intern::~Intern()
{
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

// Other member functions

AForm	*Intern::makeForm(std::string formName, std::string target)
{
	AForm		*form;
	std::string	formNames[] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };
	int i = 0;
	while (i < 3 && formNames[i] != formName)
		++i;
	switch (i)
	{
	case 0:
		form = new PresidentialPardonForm(target);
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		break;
	case 2:
		form = new ShrubberyCreationForm(target);
		break;
	default:
		form = NULL;
		break;
	}
	if (form)
		std::cout << "Intern creates " << formName << std::endl;
	else
		std::cout << "Intern couldn't create nonexistent form " << formName << std::endl;
	return (form);
}
