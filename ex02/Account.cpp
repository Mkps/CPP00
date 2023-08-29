#include "Account.hpp"

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
}

Account::~Account( void )
{
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}
static int	getNbDeposits( void );
static int	getNbWithdrawals( void );
static void	displayAccountsInfos( void );
