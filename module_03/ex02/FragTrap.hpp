/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:15:37 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:45:12 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		// Constructors
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap & copy);

		// Destructor
		~FragTrap(void);

		// Member functions
		void highFivesGuys(void);
};

#endif