/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:30:20 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 18:07:19 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Character.hpp"

class Cure : public AMateria
{
	public:
		// Constructor
		Cure(void);
		Cure(const Cure &copy);

		// Destructor
		virtual ~Cure();
		
		// Operators
		Cure & operator=(const Cure &assign);

		// Other member functions
		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);
};

#endif