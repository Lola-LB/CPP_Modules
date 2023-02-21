/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:26:20 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/20 13:50:25 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <stdlib.h>
# include <stdio.h>
# include <iomanip>
# include <cstring>

using namespace std;

class Contact
{
	public:
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
};

class PhoneBook
{
	public:
		PhoneBook(void);
		void addContact(Contact contact);
		int		nb;
		Contact	contacts[8];

	private:
};

#endif