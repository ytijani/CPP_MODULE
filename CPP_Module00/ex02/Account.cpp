#include "Account.hpp"

int Account::_nbAccounts, Account::_totalAmount, Account::_totalNbDeposits, Account::_totalNbWithdrawals = 0;


int Account::getNbAccounts()
{
    return(_nbAccounts);
}

int Account::getTotalAmount()
{
    return(_totalAmount);
}

int Account::getNbDeposits()
{
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return(_totalNbWithdrawals);
}

void    Account::_displayTimestamp()
{
    time_t now = time(0);
    std::cout<<"[";
    tm *ltm = localtime(&now);
    std::cout<<std::setfill('0')<<std::setw(2)<<1900 + ltm->tm_year;
    std::cout<<std::setfill('0')<<std::setw(2)<<1 + ltm->tm_mon;
    std::cout<<std::setfill('0')<<std::setw(2)<<ltm->tm_mday;
    std::cout<<"_";
    std::cout<<std::setfill('0')<<std::setw(2)<<ltm->tm_hour;
    std::cout<<std::setfill('0')<<std::setw(2)<<ltm->tm_min;
    std::cout<<std::setfill('0')<<std::setw(2)<<ltm->tm_sec;
    std::cout<<"] ";
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout<<"account:"<<getNbAccounts();
    std::cout<<";total:"<<_totalAmount;
    std::cout<<";deposits:"<<getNbDeposits();
    std::cout <<";withdrawals:"<<getNbWithdrawals()<<std::endl;
}

void    Account::makeDeposit(int deposit)
{
        _displayTimestamp();
        std::cout<<"index :"<<_accountIndex;
        std::cout<<";p_amount:"<<_amount;
        std::cout<<";deposit:"<<deposit;
        std::cout<<";amount:"<<_amount + deposit;
        std::cout<<";nb_diposits:"<<1;
        std::cout<<std::endl;
        this->_totalAmount += deposit;
        this->_amount += deposit;
        this->_totalNbDeposits++;
        this->_nbDeposits++;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (_amount < withdrawal)
    {
        std::cout<<"index:"<<_accountIndex;
        std::cout<<";p_amount:"<<_amount;
        std::cout<<";withdrawals:";
        std::cout<<"refused"<<std::endl;
        _nbWithdrawals = 0;
        return (false);
    }
    std::cout<<"index :"<<_accountIndex;
    std::cout<<";p_amount:"<<_amount;
    std::cout<<";withdrawal:"<<withdrawal;
    std::cout<<";amount:"<<_amount - withdrawal;
    std::cout<<";nb_withdrawals:"<<1;
    std::cout<<std::endl;
    this->_totalAmount -= withdrawal;
    this->_amount -= withdrawal;
    this->_totalNbWithdrawals++;
    _nbWithdrawals = 1;
    return (true);
}

int Account::checkAmount() const
{
    return (this->_amount);
}

void    Account::displayStatus() const
{
    _displayTimestamp();
    std::cout<<"index :"<<_accountIndex;
    std::cout<<";amount:"<<_amount;
    std::cout<<";deposits:"<<_nbDeposits;
    std::cout<<";withdrawals:"<<_nbWithdrawals;
    std::cout<<std::endl;
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _accountIndex = _nbAccounts++;
    this->_totalAmount += initial_deposit;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout<<"index:"<<_accountIndex;
    std::cout<<";amount"<<initial_deposit;
    std::cout<<";created"<<std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex;
    std::cout<<";amount"<<_amount;
    std::cout<<";closed"<<std::endl;
}
