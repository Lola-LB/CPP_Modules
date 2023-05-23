/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:48:07 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 17:59:27 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_learnedMateria[4];
	
	public:
		// Constructors
		MateriaSource(void);
		MateriaSource(const MateriaSource & copy);

		// Operators
		MateriaSource & operator=(const MateriaSource &assign);

		// Destructor
		~MateriaSource(void);

		// Other member functions
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};