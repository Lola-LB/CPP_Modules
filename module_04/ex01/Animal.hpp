/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:29 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:54:44 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		
		// Destructor
		virtual ~Animal();
		
		// Operators
		virtual Animal & operator=(const Animal &assign);
		
		// Getters / Setters
		std::string getType() const;

		virtual void makeSound(void) const;
		
	protected:
		std::string _type;
};

#endif