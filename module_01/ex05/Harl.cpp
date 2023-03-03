/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:25:01 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/27 10:22:55 by lle-bret         ###   ########.fr       */
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
	if (i < 4)
		(this->*fn_list[i])();
	else
		cout << "Wrong level argument" << endl;
}

