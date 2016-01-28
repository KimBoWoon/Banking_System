#ifndef __NOMAL_ACCOUNT__
#define __NOMAL_ACCOUNT__

#include "Account.h"
#include "String.h"

class NomalAccount : public Account
{
private:
	int InterRate;
public:
	//NomalAccount(char* n, int Account, int rate, int money = 0) : Account(n, Account, money), InterRate(rate)	{}
	NomalAccount(String n, int account, int rate, int money = 0) : Account(n, account, money), InterRate(rate)	{}

	virtual void Deposit(int money)
	{
		Account::Deposit(money);
		Account::Deposit(money * (InterRate / 100.0));
	}
};

#endif