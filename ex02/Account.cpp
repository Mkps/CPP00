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
static int	getTotalAmount( void );
static int	getNbDeposits( void );
static int	getNbWithdrawals( void );
static void	displayAccountsInfos( void );
