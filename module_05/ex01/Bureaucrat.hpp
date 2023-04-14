/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lola <lola@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:35:34 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/14 14:00:38 by lola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string				_name;
		int								_grade;
		
	public:
		// Constructors
		Bureaucrat(void);
		Bureaucrat(Bureaucrat & copy);
		Bureaucrat(const std::string name, int grade);
		
		// Destructor
		~Bureaucrat(void);

		// Operators
		Bureaucrat & operator=(Bureaucrat & assign);
		friend std::ostream & operator<<(std::ostream &out, const Bureaucrat &b);
		
		const std::string	getName(void) const;
		int					getGrade(void) const;

		void				upGrade(void);
		void				deGrade(void);

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
		void	signForm(Form & f);
};


#endif