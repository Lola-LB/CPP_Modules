/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:25:01 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:10:29 by lle-bret         ###   ########.fr       */
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
	std::cout << DEBUG << std::endl;
}

void Harl::info( void )
{
	std::cout << INFO << std::endl;
}

void Harl::warning( void )
{
	std::cout << WARNING << std::endl;
}

void Harl::error( void )
{
	std::cout << ERROR << std::endl;
}

void Harl::complain( std::string level )
{
	HarlMemFn	fn_list[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		name_list[4] = { std::string("DEBUG"), std::string("INFO"), std::string("WARNING"), std::string("ERROR")};
	int			i;
	
	i = 0;
	while (i < 4 && name_list[i].compare(level) != 0)
		++i;
	switch (i)
	{
		case (0):
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*fn_list[0])();
			std::cout << std::endl;
		case (1):
			std::cout << "[ INFO ]" << std::endl;
			(this->*fn_list[1])();
			std::cout << std::endl;
		case (2):
			std::cout << "[ WARNING ]" << std::endl;
			(this->*fn_list[2])();
			std::cout << std::endl;
		case (3):
			std::cout << "[ ERROR ]" << std::endl;
			(this->*fn_list[3])();
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

