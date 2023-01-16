#include <iostream>
#include <string>
#include <ctime>
#include "../includes/Account.hpp"

int	Account::_nbAccounts = 8;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
int	a = 0;

/******************************/
/* CONSTRUCTOR AND DESTRUCTOR */
/******************************/

Account::Account(int initial_deposit)
{
	this->_accountIndex = a;
	a += 1;
	Account::_displayTimestamp();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_totalAmount += _amount;
	std::cout << " index:" << this->_accountIndex << ';';
	std::cout << "amount:" << initial_deposit << ";created" << std::endl;
	return ;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ';';
	std::cout << "amount:" << Account::_amount;
	std::cout << ";closed" << std::endl;
	return ;
}

/******************************/
/* MEMBER FUNCTIONS           */
/******************************/

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	this->_nbDeposits++;
	std::cout << " index:" << Account::_accountIndex << ';';
	std::cout << "p_amount:" << Account::_amount << ';';
	std::cout << "deposit:" << deposit << ';';
	std::cout << "amount:" << Account::_amount + deposit << ';';
	std::cout << "nb_deposits:" << Account::_nbDeposits << std::endl;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_totalNbDeposits += this->_nbDeposits;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ';';
	std::cout << "p_amount:" << Account::_amount << ';';
	if ( Account::_amount - withdrawal < 0)
		std::cout << "withdrawal:refused" << std::endl;
	else
	{
		this->_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ';';
		std::cout << "amount:" << Account::_amount - withdrawal << ';';
		std::cout << "nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals += this->_nbWithdrawals;
	}
	return true;
}

int	Account::checkAmount(void) const
{
	return (Account::_totalAmount);
}

/******************************/
/* GETTER FUNCTIONS           */
/******************************/

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

/******************************/
/* DISPLAY FUNCTIONS          */
/******************************/

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ';';
	std::cout << "total:" << Account::getTotalAmount() << ';';
	std::cout << "deposits:" << Account::getNbDeposits() << ';';
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return ;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ';';
	std::cout << "amount:" << Account::_amount << ';';
	std::cout << "deposits:" << Account::_nbDeposits << ';';
	std::cout << "withdrawals:" << Account::_nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	time_t temps;
	struct tm datetime;
	char  format[32];
 
	time(&temps);
	datetime = *localtime(&temps);
 
	strftime(format, 32, "%Y%m%d_%H%M%S", &datetime);
 
	std::cout << '[' << format << ']';
}
