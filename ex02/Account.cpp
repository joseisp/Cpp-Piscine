/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:45:32 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/07 01:25:47 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit)
{
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    std::cout << "index:" << this->_accountIndex  << ";amount:" << initial_deposit
              <<  ";created"
              << std::endl;
    return ; 
}

Account::~Account ( void )
{
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
    <<  ";created" << std::endl; 
    return ;    
}

void    Account::displayStatus ( void ) const
{
    std::cout << "accounts:" << _nbAccounts 
     << ";total:" << _totalAmount << ";deposits:"
      << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    // [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
}


bool    Account::makeWithdrawal( int withdrawal)
{
    if (this->_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return 1;    
    }
    else
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
    }
    return 0;
}
void    Account::makeDeposit( int deposit )
{
    _totalAmount += deposit;
    _totalNbDeposits++;
    this->_amount += deposit;
    this->_nbDeposits++;

    return ;
}

void Account::displayAccountsInfos( void )
{
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
    << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals()
    << std::endl;
}

int Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);    
}

int Account::getNbWithdrawals ( void )
{
    return (Account::_totalAmount);
}

int Account::checkAmount( void ) const
{
  return (this->_amount);
}
