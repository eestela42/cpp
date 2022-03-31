#include "account.hpp"
#include "iostream"

int		Account::_nbAccounts = 0; 
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account()	{
}

Account::~Account()	{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed";
	if (_accountIndex != Account::_nbAccounts - 1)
		std::cout << std::endl;
}

Account::Account( int initial_deposit ) :	_amount(initial_deposit) {
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = Account::_nbAccounts++;
	Account::_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

void	Account::_displayTimestamp( void )	{
	std::cout << "[19920104_091532] ";
}

void	Account::makeDeposit( int deposit )	{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:"
	<< deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits + 1
	<< std::endl	;
	_nbDeposits++;
	_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )	{
	if ((Account::_amount - withdrawal) >= 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:"
	<< withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals + 1
	<< std::endl	;
		_nbWithdrawals++;
		_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		return (1);
	}//index:5;p_amount:23;withdrawal:refusedse
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused"
		<< std::endl	;
	}
	return (0);
}

int		Account::checkAmount( void ) const	{
	return (Account::_amount);
}

void	Account::displayAccountsInfos( void )	{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount()
	<< ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals()
	<< std::endl	;
}

void	Account::displayStatus( void ) const	{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
	<< _nbDeposits << ";withdrawals:" << _nbWithdrawals
	<< std::endl	;
}

int	Account::getNbAccounts( void )	{
	return(_nbAccounts);
}

int	Account::getTotalAmount( void )	{
	return(_totalAmount);
}

int	Account::getNbDeposits( void )	{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )	{
	return(_totalNbWithdrawals);
}
