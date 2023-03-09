/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:27:03 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:10:29 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	nb = 0;
}

void PhoneBook::addContact(Contact contact)
{
	if (nb < 8)
	{
		contacts[nb] = contact;
		++nb;
	}
	else
		contacts[0] = contact;
}

PhoneBook	add(PhoneBook phoneBook)
{
	std::string	input;
	Contact	contact;
	
	std::cout << "\nFirst name: ";
	cin >> input;
	contact.first_name = input;
	std::cout << "Last name: ";
	cin >> input;
	contact.last_name = input;
	std::cout << "Nickname: ";
	cin >> input;
	contact.nickname = input;
	std::cout << "Phone number: ";
	cin >> input;
	contact.phone_number = input;
	std::cout << "Darkest secret: ";
	cin >> input;
	contact.darkest_secret = input;
	phoneBook.addContact(contact);
	std::cout << "\nContact successfully added !\n\n";
	return (phoneBook);
}

void	search(PhoneBook PhoneBook)
{
	int	index;

	std::cout << "\n";
	std::cout << left << setw(10) << "Index" << '|' <<
			setw(10) << "First name" << '|' <<
			setw(10) << "Last name" << '|' <<
			setw(10) << "Nickname" << "\n";
	for (int i = 0; i < PhoneBook.nb; i++)
	{
		std::cout << left << setw(10) << i << '|' <<
				setw(10) << PhoneBook.contacts[i].first_name << '|' <<
        		setw(10) << PhoneBook.contacts[i].last_name << '|' <<
        		setw(10) << PhoneBook.contacts[i].nickname << "\n";
	}
	std::cout << "\nContact index: ";
	cin >> index;
	while (index >= PhoneBook.nb || index < 0)
	{
		std::cout << "Wrong index: must be between 0 and " << PhoneBook.nb - 1;
		std::cout << "\n\nContact index: ";
		cin >> index;
	}
	std::cout << "\n";
	std::cout << "First name : " << PhoneBook.contacts[index].first_name << "\n"
		<< "Last name : " << PhoneBook.contacts[index].last_name << "\n"
		<< "Nickname : " << PhoneBook.contacts[index].nickname << "\n"
		<< "Phone number : " << PhoneBook.contacts[index].phone_number << "\n"
		<< "Darkest secret : " << PhoneBook.contacts[index].darkest_secret << "\n\n";
}

int main(void)
{
	std::string		input;
	PhoneBook	phoneBook;

	std::cout << "ADD (save a new contact), SEARCH (display a specific contact), EXIT (end program) : ";
	cin >> input;
	while (input.compare("EXIT") != 0)
	{
		if (input.compare("ADD") == 0)
			phoneBook = add(phoneBook);
		else if (input.compare("SEARCH") == 0)
			search(phoneBook);
		std::cout << "ADD (save a new contact), SEARCH (display a specific contact), EXIT (end program) : ";
		cin >> input;
	}
	return 0;
}

