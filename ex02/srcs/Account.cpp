/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:05:40 by mriant            #+#    #+#             */
/*   Updated: 2022/09/21 17:34:36 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// ************************************************************************** //
// Contructor / Desctructor
// ************************************************************************** //

Account::Account( void ):_amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = getNbAccounts();
	std::cout << "[TimeStamp] index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::Account( int initial_deposit ):_amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = getNbAccounts();
	std::cout << "[TimeStamp] index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account( void )
{
	std::cout << "[TimeStamp] index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}

// ************************************************************************** //
// Getter
// ************************************************************************** //


int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

// ************************************************************************** //
// Actions
// ************************************************************************** //

void	Account::makeDeposit( int deposit )
{
	std::cout << "[TimeStamp] index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount;
	this->_nbDeposits++;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "[TimeStamp] index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (this->_amount - withdrawal < 0)
	{
		std::cout << ";withdrawal refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount += withdrawal;
	std::cout << ";amount:" << this->_amount;
	this->_nbWithdrawals++;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (0);
}

// ************************************************************************** //
// Display
// ************************************************************************** //

void	Account::displayAccountsInfos( void )
{
	return ;
}

void	Account::displayStatus( void ) const
{
	return ;
}

void	Account::_displayTimestamp( void )
{
	return ;
}

