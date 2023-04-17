/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:16:07 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/16 20:20:55 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	public:
		// Constructors
		Data();
		Data(int index, std::string name);
		Data(const Data &copy);
		
		// Destructor
		~Data();
		
		// Operators
		Data & operator=(const Data &assign);

		std::string	_name;
		int			_index;	
};

#endif