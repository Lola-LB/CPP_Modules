/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:34:52 by lola              #+#    #+#             */
/*   Updated: 2023/04/14 14:02:02 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors
Form::Form() :
	_name(""),
	_signGrade(1),
	_execGrade(1)
{
	_signed = 0;
}

Form::Form(const Form &copy) :
	_name(copy.get_name()),
	_signGrade(copy.get_signGrade()),
	_execGrade(copy.get_execGrade())
{
	_signed = copy.get_signed();
}

Form::Form(const std::string name, bool s, const int signGrade, const int execGrade) :
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
Form::~Form()
{
}

// Operators
Form & Form::operator=(const Form &assign)
{
	_signed = assign.get_signed();
	return *this;
}

// Getters / Setters
const std::string Form::get_name() const
{
	return _name;
}
bool Form::get_signed() const
{
	return _signed;
}
int Form::get_signGrade() const
{
	return _signGrade;
}
int Form::get_execGrade() const
{
	return _execGrade;
}

// Stream operators
std::ostream & operator<<(std::ostream &os, const Form &object)
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
const char * Form::GradeTooHighException::what(void) const throw()
{
    return "Grade Too High Exception";
}

const char * Form::GradeTooLowException::what(void) const throw()
{
    return "Grade Too Low Exception";
}

// Other member functions
void	Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > _signGrade)
		throw (GradeTooLowException());
	_signed = true;
}