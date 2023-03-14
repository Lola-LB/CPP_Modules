/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:56:32 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/09 18:18:06 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <chrono>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = ++_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex - 1
			  << ";amount:" << initial_deposit
			  << ";created" << "\n";
	Account::_totalAmount += initial_deposit;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex - 1
			  << ";amount:" << Account::_amount
			  << ";closed" << "\n";
    _nbAccounts--;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
			  << ";total:" << Account::getTotalAmount()
			  << ";deposits:" << Account::getNbDeposits()
			  << ";withdrawals:" << Account::getNbWithdrawals() << "\n";
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex - 1
			  << ";p_amount:" << Account::_amount
			  << ";deposit:" << deposit;
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << ";amount:" << Account::_amount
			  << ";nb_deposits:" << Account::_nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex - 1
			  << ";p_amount:" << Account::_amount
			  << ";withdrawal:";
	if (_amount >= withdrawal)
	{
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << withdrawal
				  << ";amount:" << Account::_amount
				  << ";nb_withdrawals:" << Account::_nbWithdrawals
				  << "\n";
		return (true);
	}
	else
		std::cout << "refused" << "\n";
	return (false);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex - 1
			  << ";amount:" << Account::_amount
			  << ";deposits:" << Account::_nbDeposits
			  << ";withdrawals:" << Account::_nbWithdrawals << "\n";
}

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(NULL);
    std::tm *tm_now = std::localtime(&now);

	char buffer[80];
    std::strftime(buffer, 80, "%Y%m%d_%H%M%S", tm_now);
    std::cout << "[" << buffer << "] ";
}
