/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:45:32 by jinacio-          #+#    #+#             */
/*   Updated: 2022/10/10 23:08:29 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit)
{
    _totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex  << ";amount:" << initial_deposit
              <<  ";created"
              << std::endl;
    return ; 
}

Account::~Account ( void )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
    <<  ";closed" << std::endl; 
    return ;    
}

void    Account::displayStatus ( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
     << ";total:" << checkAmount() << ";deposits:"
      << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


bool    Account::makeWithdrawal( int withdrawal)
{
    int aux = this->_amount;
    if (this->_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout << "index:"<< this->_accountIndex << ";p_amount:"<< aux
        <<";withdrawal:refused" << std::endl;
        return 1;    
    }
    else
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << aux
        << ";withdrawal:" << withdrawal << ";amount:" << this->_amount
        << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    }
    return 0;
}
void    Account::makeDeposit( int deposit)
{
    _totalAmount += deposit;
    _totalNbDeposits++;
    int aux = _amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << aux << ";deposits:"
    << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
    //index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1

    return ;
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
    << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals()
    << std::endl;

    return ;
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
    return (Account::_totalNbWithdrawals);
}

int Account::checkAmount( void ) const
{
  return (this->_amount);
}

void Account::_displayTimestamp(void)
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << "["<< (now->tm_year + 1900) << (now->tm_mon + 1)
    <<  now->tm_mday << "_" << now->tm_hour << now->tm_min << now->tm_sec << "]";
}
//   time_t rawtime;
//   struct tm *timeinfo;
//   char buffer[16];

//   time(&rawtime);
//   timeinfo = localtime(&rawtime);
//   strftime(buffer, 16, "%Y%m%d_%I%M%S", timeinfo);
//   std::cout << "[" << buffer << "] ";
// //   std::cout << "[19920104_091532] ";