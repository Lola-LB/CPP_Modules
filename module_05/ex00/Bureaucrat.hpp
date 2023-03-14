/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:35:34 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/08 16:30:32 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

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
		std::ostream & operator<<(std::ostream &out);
		
		const std::string	getName(void);
		int					getGrade(void);

		void				upGrade(void);
		void				deGrade(void);
};


#endif