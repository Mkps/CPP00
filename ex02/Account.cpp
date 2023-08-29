#include "Account.hpp"
#include <bits/types/struct_tm.h>
# include <iostream>
# include <ctime>
#include <string>
# include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit) : _accountIndex(Account::_nbAccounts),
		_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_nbAccounts++;
	Account::_totalAmount += Account::checkAmount();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
}
	
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

void	Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	makeDeposit( int deposit )
{
}
// bool	makeWithdrawal( int withdrawal );
// int		checkAmount( void ) const;
// void	displayStatus( void ) const;
static std::string	DateString(void)
{
	time_t rawtime;
	struct tm *timeinfo;
	char buffer[17];
	time (&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 17, "%G%m%e_%H%M%S", timeinfo);
	return (std::string(buffer));

}

void	Account::_displayTimestamp(void)
{
	std::cout << "["<< DateString() << "] ";
}
//
// int main(void)
// {
// 	Account account(100);
//
// 	return (0);
// }
