/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:18:35 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 18:06:36 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	
	public:
		// Constructors
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);

		// Operators
		AMateria & operator=(const AMateria &assign);
		
		// Destructor
		virtual ~AMateria();
		std::string const & getType() const;

		// Other member functions
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif