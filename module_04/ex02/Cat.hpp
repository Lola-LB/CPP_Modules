/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:30:29 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/03 18:40:58 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat(void);
		Cat(const Cat &copy);
		Cat(const Brain brain);
		
		// Operators
		Cat & operator=(const Cat &assign);
		
		// Destructor
		~Cat();

		virtual void makeSound(void) const;
	
	private:
		Brain* _brain;
};

#endif