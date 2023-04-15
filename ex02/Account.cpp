/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 04:31:34 by pszleper          #+#    #+#             */
/*   Updated: 2023/04/15 05:01:44 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

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
	std::cout << "accounts:" << _nbAccounts << ";total" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
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
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << "created" << std::endl;
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
	this->_amount += deposit;
	this->_totalNbDeposits += 1;
	this->_nbDeposits += 1;
	this->_totalAmount += deposit;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal)
		return (false);
	this->_amount -= withdrawal;
	this->_totalNbWithdrawals += 1;
	this->_nbWithdrawals += 1;
	this->_totalAmount -= withdrawal;
	return (true);
}
int		Account::checkAmount(void) const
{
	return (this->_amount);
}
void	Account::displayStatus(void) const
{
	return ;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	return ;
	// this displays the string: "[YEARMODY_HRMNSC] " with the space at the end
	// std::time_t timestamp_struct = std::time(NULL);   // get time now
	// std::tm* now = std::localtime(&timestamp_struct);
	// std::strftime
}
int				_accountIndex;
int				_amount;
int				_nbDeposits;
int				_nbWithdrawals;
Account::Account( void )
{
	Account(0);
}
