/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:34:49 by lola              #+#    #+#             */
/*   Updated: 2023/04/14 14:00:10 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const Form &copy);
		Form(const std::string name, bool s, const int signGrade, const int execGrade);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);
		friend std::ostream & operator<<(std::ostream &out, const Form &object);

		
		// Getters / Setters
		const std::string	get_name()		const;
		bool 				get_signed()	const;
		int					get_signGrade()	const;
		int					get_execGrade()	const;
		
		// Nested exceptions classes
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		// Other member functions
		void	beSigned(Bureaucrat & b);
		
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif