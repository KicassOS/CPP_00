/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 04:31:34 by pszleper          #+#    #+#             */
/*   Updated: 2023/04/16 04:13:12 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}
int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}
int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos(void)
{
	// this displays the following:
	// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}
Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts += 1;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_totalAmount -= this->_amount;
	this->_totalNbDeposits -= this->_nbDeposits;
	this->_totalNbWithdrawals -= this->_nbWithdrawals;
	this->_nbAccounts -= 1;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}
void	Account::makeDeposit(int deposit)
{
	int	p_amount = this->_amount; //store previous amount
	this->_amount += deposit;
	this->_totalNbDeposits += 1;
	this->_nbDeposits += 1;
	this->_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	int	p_amount = this->_amount; // store previous amount
	this->_amount -= withdrawal;
	this->_totalNbWithdrawals += 1;
	this->_nbWithdrawals += 1;
	this->_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}
int		Account::checkAmount(void) const
{
	return (this->_amount);
}
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

// this displays the string: "[YEARMODY_HRMNSC] " with the space at the end
void	Account::_displayTimestamp( void )
{
	std::time_t unix_time = std::time(NULL); // get UNIX time, seconds since 1, January 1970
	std::tm* datetime = std::localtime(&unix_time); // convert UNIX time to get year, month, day, hour, minutes and seconds in the local timezone
	std::cout << "[" << (datetime->tm_year + 1900);
	if ((datetime->tm_mon + 1) < 10)
		std::cout << "0";
	std::cout << (datetime->tm_mon + 1);
	if ((datetime->tm_mday) < 10)
		std::cout << "0";
	std::cout << datetime->tm_mday << "_";
	if ((datetime->tm_hour) < 10)
		std::cout << "0";
	std::cout << datetime->tm_hour;
	if ((datetime->tm_min) < 10)
		std::cout << "0";
	std::cout << datetime->tm_min;
	if ((datetime->tm_sec) < 10)
		std::cout << "0";
	std::cout << datetime->tm_sec << "] ";
}

Account::Account( void )
{
	Account(0);
}
