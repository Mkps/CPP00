#include "Account.hpp"

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
}

Account::~Account( void )
{
}
static int	getNbAccounts( void );
static int	getTotalAmount( void );
static int	getNbDeposits( void );
static int	getNbWithdrawals( void );
static void	displayAccountsInfos( void );
