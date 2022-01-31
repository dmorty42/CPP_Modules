/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:21:25 by dmorty            #+#    #+#             */
/*   Updated: 2022/01/27 20:21:28 by dmorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	time_t	sec = time(NULL);
	tm* data = localtime(&sec);
	std::cout << std::setfill('0') << "[" << data->tm_year + 1900 
				<< std::setw(2) << data->tm_mday 
				<< std::setw(2) << data->tm_mon + 1 
				<< "_" << data->tm_hour << data->tm_min
				<< data->tm_sec << "] ";
}

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:0;" << "created" << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << initial_deposit << ";" 
			<< "created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	this->_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";" 
			<< "closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" 
			<< "p_amount:" << this->_amount - deposit 
			<< ";" << "deposit:" << deposit << ";" 
			<< "amount:" << this->_amount << ";" 
			<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if ((this->_amount - withdrawal) >= 0)
	{
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		this->_totalNbWithdrawals += 1;
		std::cout << "index:" << this->_accountIndex << ";" 
			<< "p_amount:" << this->_amount + withdrawal 
			<< ";" << "withdrawal:" << withdrawal << ";" 
			<< "amount:" << this->_amount << ";" 
			<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		std::cout << "index:" << this->_accountIndex << ";" 
			<< "p_amount:" << this->_amount << ";" << "withdrawal:" 
			<< "refused" << std::endl; 
	}
	return (false);
}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";" 
				<< "total:" << Account::_totalAmount << ";" 
				<< "deposits:" << Account::_totalNbDeposits << ";" 
				<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" 
			<< "amount:" << this->_amount << ";" 
			<< "deposits:" << this->_nbDeposits << ";"
			<< "withdrawals:" << this->_nbWithdrawals
			<< std::endl;
}