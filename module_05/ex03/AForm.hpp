/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:34:49 by lola              #+#    #+#             */
/*   Updated: 2023/04/14 14:00:10 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		// Constructors
		AForm();
		AForm(const AForm &copy);
		AForm(const std::string name, bool s, const int signGrade, const int execGrade);
		
		// Destructor
		virtual ~AForm();
		
		// Operators
		AForm & operator=(const AForm &assign);
		friend std::ostream & operator<<(std::ostream &out, const AForm &object);

		
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

		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		// Other member functions
		void			beSigned(const Bureaucrat & b);
		void			execute(Bureaucrat const & executor) const;
		virtual void	action(void) const = 0;
		
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const AForm &object);

#endif