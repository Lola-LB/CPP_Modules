/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:00:15 by lola              #+#    #+#             */
/*   Updated: 2023/04/14 18:38:17 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: AForm("Robotomy Request", false, 72, 45)
{
	_target = target;
}

// Other member functions
void	RobotomyRequestForm::action(void) const
{
	srand (time(NULL));
	std::cout << "<loud drilling noise> BZZZZZZZZZZZZZZ!! <loud drilling noise>" << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy has failed." << std::endl;
}
