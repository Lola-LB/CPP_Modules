/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:25:01 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/27 10:35:27 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{
	
}

void Harl::debug( void )
{
	cout << DEBUG << endl;
}

void Harl::info( void )
{
	cout << INFO << endl;
}

void Harl::warning( void )
{
	cout << WARNING << endl;
}

void Harl::error( void )
{
	cout << ERROR << endl;
}

void Harl::complain( string level )
{
	HarlMemFn	fn_list[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	string		name_list[4] = { string("DEBUG"), string("INFO"), string("WARNING"), string("ERROR")};
	int			i;
	
	i = 0;
	while (i < 4 && name_list[i].compare(level) != 0)
		++i;
	switch (i)
	{
		case (0):
			cout << "[ DEBUG ]" << endl;
			(this->*fn_list[0])();
			cout << endl;
		case (1):
			cout << "[ INFO ]" << endl;
			(this->*fn_list[1])();
			cout << endl;
		case (2):
			cout << "[ WARNING ]" << endl;
			(this->*fn_list[2])();
			cout << endl;
		case (3):
			cout << "[ ERROR ]" << endl;
			(this->*fn_list[3])();
			cout << endl;
			break ;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
	}
}

