/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:56:13 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/08 18:59:29 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

void Account::_displayTimestamp(void)
{
	time_t curr = time(0);
	struct tm *tm = localtime(&curr);

	std::cout << "[" << (tm->tm_year + 1900);
	if(tm->tm_mon < 10)
		std::cout << "0" << (tm->tm_mon + 1);
	else
		std::cout << (tm->tm_mon + 1);
	if(tm->tm_mday < 10)
		std::cout << "0" << tm->tm_mday << "_";
	else
		std::cout << tm->tm_mday << "_" ;
	if(tm->tm_hour < 10)
		std::cout << "0" << tm->tm_hour;
	else
		std::cout << tm->tm_hour;
	if(tm->tm_min < 10)
		std::cout << "0" << tm->tm_min;
	else
		std::cout << tm->tm_min;
	if(tm->tm_sec < 10)
		std::cout << "0" << tm->tm_sec;
	else
		std::cout << tm->tm_sec;
	std::cout << "] ";
	return;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	std::cout << "index:" << this->_accountIndex ;
	std::cout <<";amount:" << initial_deposit ;
	std::cout << ";created";
	std::cout << std::endl;
	_totalAmount += this->_amount;
	_nbAccounts++;
	return;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex ;
	std::cout <<";amount:" << this->_amount ;
	std::cout<< ";closed" ;
	std::cout << std::endl;
}
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts ;
	std::cout <<";total:" << _totalAmount ;
	std::cout << ";deposits:" << _totalNbDeposits ; 
	std::cout << ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex ;
	std::cout <<";amount:" <<this->_amount ;
	std::cout << ";deposits:" << this->_nbDeposits ;
	std::cout << ";withdrawals:" << this->_nbWithdrawals ;
	std::cout << std::endl;
}
void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex ;
	std::cout <<";p_amount:" <<this->_amount;
	std::cout << ";deposit:" << deposit ;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits ;
	std::cout << std::endl;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex ;
	std::cout <<";p_amount:" << this->_amount;
	if (this->_amount - withdrawal > 0)
	{
		std::cout <<";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
		std::cout <<";amount:" <<this->_amount;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals ;
		std::cout << std::endl;
		return (false);
	}
	else
	{
		std::cout <<";withdrawal:refused";
		std::cout << std::endl;
	return (true);
	}	
}
