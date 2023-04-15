/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:34:52 by lola              #+#    #+#             */
/*   Updated: 2023/04/14 14:02:02 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructors
AForm::AForm() :
	_name(""),
	_signGrade(1),
	_execGrade(1)
{
	_signed = 0;
}

AForm::AForm(const AForm &copy) :
	_name(copy.get_name()),
	_signGrade(copy.get_signGrade()),
	_execGrade(copy.get_execGrade())
{
	_signed = copy.get_signed();
}

AForm::AForm(const std::string name, bool s, const int signGrade, const int execGrade) :
	_name(name),
	_signGrade(signGrade),
	_execGrade(execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw (GradeTooHighException());
	else if (_signGrade > 150 || _execGrade > 150)
		throw (GradeTooLowException());
	_signed = s;
}

// Destructor
AForm::~AForm()
{
}

// Operators
AForm & AForm::operator=(const AForm &assign)
{
	_signed = assign.get_signed();
	return *this;
}

// Getters / Setters
const std::string AForm::get_name() const
{
	return _name;
}
bool AForm::get_signed() const
{
	return _signed;
}
int AForm::get_signGrade() const
{
	return _signGrade;
}
int AForm::get_execGrade() const
{
	return _execGrade;
}

// Stream operators
std::ostream & operator<<(std::ostream &os, const AForm &object)
{
	os << "Form " << object._name
	   << " with sign grade " << object._signGrade
	   << " and exec grade " << object._execGrade;
	if (object._signed)
		os << " is signed.";
	else
		os << " is not signed.";
	return os;
}

// Nested exceptions classes
const char * AForm::GradeTooHighException::what(void) const throw()
{
    return "Grade Too High Exception";
}

const char * AForm::GradeTooLowException::what(void) const throw()
{
    return "Grade Too Low Exception";
}

const char * AForm::NotSignedException::what(void) const throw()
{
    return "Form is not signed";
}

// Other member functions
void	AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > _signGrade)
		throw (GradeTooLowException());
	_signed = true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 137)
		throw (GradeTooLowException());
	if (!_signed)
		throw(NotSignedException());
	action();
}
