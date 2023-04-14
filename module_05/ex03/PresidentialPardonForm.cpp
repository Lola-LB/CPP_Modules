/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:00:15 by lola              #+#    #+#             */
/*   Updated: 2023/04/14 19:00:54 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: AForm("Presidential Pardon", false, 25, 5)
{
	_target = target;
}

// Other member functions
void	PresidentialPardonForm::action(void) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
