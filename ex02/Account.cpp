/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 04:31:34 by pszleper          #+#    #+#             */
/*   Updated: 2023/04/15 04:17:01 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Account
{

public:

	static int	getNbAccounts(void)
	{
		return (_nbAccounts);
	}

	static int	getTotalAmount(void)
	{
		return (_totalAmount);
	}

	static int	getNbDeposits(void)
	{
		return (_totalNbDeposits);
	}

	static int	getNbWithdrawals(void)
	{
		return (_totalNbWithdrawals);
	}

	static void	displayAccountsInfos(void)
	{
		// this displays the following:
		// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
		_displayTimestamp();
		std::cout << "accounts:" << _nbAccounts << ";total" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
		return ;
	}

	Account(int initial_deposit)
	{
		this->_amount = initial_deposit;
		this->_totalAmount += initial_deposit;
		this->_nbDeposits = 0;
		this->_accountIndex = this->_nbAccounts;
		this->_nbAccounts += 1;
		this->_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << "created" << std::endl;
	}

	~Account(void)
	{
		this->_totalAmount -= this->_amount;
		this->_totalNbDeposits -= this->_nbDeposits;
		this->_totalNbWithdrawals -= this->_nbWithdrawals;
		this->_nbAccounts -= 1;
		//[19920104_091532] index:3;amount:430;closed
		this->_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;

	}

	void	makeDeposit(int deposit)
	{
		this->_amount += deposit;
		this->_totalNbDeposits += 1;
		this->_nbDeposits += 1;
		this->_totalAmount += deposit;
	}

	bool	makeWithdrawal(int withdrawal)
	{
		if (this->_amount < withdrawal)
			return (false);
		this->_amount -= withdrawal;
		this->_totalNbWithdrawals += 1;
		this->_nbWithdrawals += 1;
		this->_totalAmount -= withdrawal;
		return (true);
	}

	int		checkAmount(void) const
	{
		return (this->_amount);
	}

	void	displayStatus(void) const
	{
		return ;
	}


private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void )
	{
		// this displays the string: "[YEARMODY_HRMNSC] " with the space at the end

		return ;
	}

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );
};
