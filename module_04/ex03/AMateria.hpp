/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:18:35 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/07 18:38:28 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

using namespace std;

class ICharacter;

class AMateria
{
	protected:
		string _type;
	
	public:
		// Constructors
		AMateria(void);
		AMateria(string const & type);
		AMateria(const AMateria &copy);

		// Destructor
		virtual ~AMateria();
		std::string const & getType() const;

		// Other member functions
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif