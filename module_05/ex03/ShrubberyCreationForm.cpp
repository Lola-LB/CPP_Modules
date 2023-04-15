/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:00:15 by lola              #+#    #+#             */
/*   Updated: 2023/04/14 18:38:17 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: AForm("Shrubbery Creation", false, 145, 137)
{
	_target = target;
}

// Other member functions
void	ShrubberyCreationForm::action(void) const
{
	std::ofstream MyFile(_target + "_shrubbery");

	std::string tree = std::string("\n    oxoxoo    ooxoo\n  ooxoxo oo  oxoxooo\n oooo xxoxoo ooo ooox\n oxo o oxoxo  xoxxoxo\n  oxo xooxoooo o ooo\n    ooo\\oo\\  /o/o\n        \\  \\/ /\n         |   /\n         |  |\n         | D|\n         |  |\n         |  |\n  _______|__|____\n");
	MyFile << tree;
}
