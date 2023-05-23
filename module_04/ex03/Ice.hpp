/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:30:20 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 18:08:32 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Character.hpp"

class Ice : public AMateria
{
	public:
		// Constructor
		Ice(void);
		Ice(const Ice &copy);

		// Destructor
		virtual ~Ice();
		
		// Operators
		Ice & operator=(const Ice &assign);

		// Other member functions
		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);
};

#endif