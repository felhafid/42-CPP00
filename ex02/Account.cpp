/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:39:35 by felhafid          #+#    #+#             */
/*   Updated: 2024/12/22 18:30:42 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
}

Account::Account( int initial_deposit )
{
    _accountIndex = getNbAccounts();
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _amount = initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << _amount << ";created\n"; 
    _nbAccounts++;
}

void	Account::_displayTimestamp( void )
{
    char timestamp[16];
    std::time_t now;
    
    std::time(&now);
    std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", std::localtime(&now));
    std::cout << "[" << timestamp << "] ";
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}


int		Account::checkAmount( void ) const
{
    return (_amount);
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
    _displayTimestamp();
    std::cout<<"accounts:" << getNbAccounts() << ";total:";
    std::cout << getTotalAmount() << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";deposits:";
    std::cout << _nbDeposits << ";withdrawals:" << _nbWithdrawals;;
    std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";deposit:";
    _amount = _amount + deposit; 
    std::cout << deposit << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    std::cout << ";withdrawal:";
    if (checkAmount() < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (0);
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _amount = _amount - withdrawal;
    std::cout << withdrawal << ";amount:" << _amount;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _totalAmount -= withdrawal;
    return (1);
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:";
    std::cout << _amount << ";closed" << std::endl;
}