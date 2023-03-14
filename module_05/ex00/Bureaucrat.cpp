/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:36:52 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/08 16:32:31 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char * GradeTooHighException::what(void) const throw()
{
    return "Grade Too High Exception";
}

const char * GradeTooLowException::what(void) const throw()
{
    return "Grade Too Low Exception";
}

Bureaucrat::Bureaucrat(void) : _name("")
{
	_grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat & copy) : _name(copy.getName())
{
	_grade = copy.getGrade();
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	try
	{
		if (_grade < 1)
			throw GradeTooHighException();
		if (_grade > 150)
			throw GradeTooLowException();
		_grade = grade;
	}
	catch(std::exception & e)
	{
		// std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat & assign)
{
	_grade = assign.getGrade();
	return (*this);
}

std::ostream & Bureaucrat::operator<<(std::ostream &out)
{
	out << _name << ", bureaucrat grade " << _grade << "." << std::endl;
	return (out);
}
		
const std::string Bureaucrat::getName(void)
{
	return (_name);
}

int Bureaucrat::getGrade(void)
{
	return (_grade);
}

void Bureaucrat::upGrade(void)
{
	try
	{
		if (_grade == 1)
			throw GradeTooHighException();
		--_grade;
	}
	catch(std::exception & e)
	{
		// std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::deGrade(void)
{
	try
	{
		if (_grade == 150)
			throw GradeTooLowException();
		++_grade;
	}
	catch(std::exception & e)
	{
		// std::cerr << e.what() << std::endl;
	}
}
