#include <iostream>
#include <string>
#include "../includes/Account.hpp"

using namespace std;

Account::Account(int initial_deposit)
{
	std::cout << "Account constructor" << std::endl;
	std::cout << "Deposit --> " << initial_deposit << std::endl;
	return ;
}

Account::~Account()
{
	std::cout << "Account destructor" << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "MakeDeposit : " << deposit << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "MakeWithdrawal : " << withdrawal << std::endl;
	return true;
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "displayAccountInfos" << std::endl;
	return ;
}