#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

using std::cout;
using std::endl;

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
    using std::setw;
    using std::setfill;
    /*the bank time structure is yyyymmdd_hhmmss*/
    time_t  now = time(0);
    tm      *ltm = localtime(&now);

    cout << "[";
    cout << 1900 + ltm->tm_year << setw(2) << setfill('0') << 1 + ltm->tm_mon << setw(2) << setfill('0') << ltm->tm_mday;
    cout << "_";
    cout << setw(2) << setfill('0') << ltm->tm_hour << setw(2) << setfill('0') << ltm->tm_min << setw(2) << setfill('0') << ltm->tm_sec;
    cout << "] ";
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << endl;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account(void)
{
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << endl;
}

void	Account::makeDeposit(int deposit) {
    _displayTimestamp();
    cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";deposit:" << deposit;
    this->_amount += deposit;
    _totalAmount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    cout << ";amount:" << checkAmount() << ";nb_deposits:" << this->_nbDeposits << endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
    if (withdrawal > checkAmount()) {
        cout << "refused" << endl;
        return (false);
    }
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;
    cout << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << endl;
    return (true);
}

int		Account::checkAmount(void) const {
    return (_amount);
}

void	Account::displayStatus(void) const {
    _displayTimestamp();
    cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
    cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << endl;
}

int	Account::getNbAccounts(void) {
    return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
    return (_totalAmount);
}

int	Account::getNbDeposits(void) {
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
    _displayTimestamp();
    cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    cout << ";deposits:" << getNbDeposits() << ";withdrawal:" << getNbWithdrawals() << endl;
}