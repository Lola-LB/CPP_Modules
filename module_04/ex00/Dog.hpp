/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:29 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 15:56:01 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);
		
		// Operators
		Dog & operator=(const Dog &assign);
		
		// Destructor
		~Dog();

		virtual void makeSound(void) const;
};

#endif