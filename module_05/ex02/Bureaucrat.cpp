/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:36:52 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/14 18:59:53 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "Grade Too High Exception";
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
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
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat & assign)
{
	_grade = assign.getGrade();
	return (*this);
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat& b)
{
	out << b.getName() << ", bureaucrat grade "
		<< b.getGrade() << ".";
	return (out);
}
		
const std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::upGrade(void)
{
	if (_grade == 1)
		throw GradeTooHighException();
	--_grade;
}

void Bureaucrat::deGrade(void)
{
	if (_grade == 150)
		throw GradeTooLowException();
	++_grade;
}

void	Bureaucrat::signForm(AForm & f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signed form " << f.get_name() << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cout << _name << " couldn't sign form " << f.get_name()
		<< " because grade " << _grade << " is below " << f.get_signGrade()
		<< std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & f) const
{
	try
	{
		f.execute(*this);
		std::cout << _name << " executed form " << f.get_name() << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cout << _name << " couldn't execute form " << f.get_name()
		<< " because grade " << _grade << " is below " << f.get_execGrade()
		<< std::endl;
	}
	catch(const AForm::NotSignedException& e)
	{
		std::cout << _name << " couldn't execute form " << f.get_name()
		<< " because form is not signed." << std::endl;
	}
}
