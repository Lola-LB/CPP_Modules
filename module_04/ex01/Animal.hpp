/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:29 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/03 18:26:32 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

using namespace std;

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(string type);
		Animal(const Animal &copy);
		
		// Destructor
		virtual ~Animal();
		
		// Operators
		virtual Animal & operator=(const Animal &assign);
		
		// Getters / Setters
		string getType() const;

		virtual void makeSound(void) const;
		
	protected:
		string _type;
};

#endif