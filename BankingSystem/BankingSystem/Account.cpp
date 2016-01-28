#include "Account.h"

Account::Account(String n, int account, int money) : Next(NULL)
{
	/*int len = strlen(n) + 1;
	Name = new char[len];
	strcpy_s(Name, sizeof(char) * len, n);*/
	Name = n;
	this->AccountNumber = account;
	this->Money = money;
}
//Account::Account(const Account &p) : Money(p.Money), AccountNumber(p.AccountNumber), Next(p.Next)
//{
//	int len = strlen(p.Name) + 1;
//	Name = new char[len];
//	strcpy_s(Name, sizeof(char) * len, p.Name);
//}
//Account::~Account()	{ delete[]Name; }
//
//Account& Account::operator= (const Account& a)
//{
//	AccountNumber = a.AccountNumber;
//	Money = a.Money;
//	Next = a.Next;
//
//	int len = strlen(a.Name) + 1;
//	delete[]Name;
//	Name = new char[len];
//	strcpy_s(Name, sizeof(char) * len, a.Name);
//	return *this;
//}

void Account::Deposit(int money)
{
	if (money < 0)
		throw Exception("��(��)�ݾ��� 0���� ���� �� �����ϴ�!");

	this->Money += money;
}
void Account::Withdraw(int money)
{
	if (money < 0)
		throw Exception("��(��)�ݾ��� 0���� ���� �� �����ϴ�!");

	if (money > this->Money)
		throw Exception("��ݾ��� ���� �ܾ׺��� Ŭ �� �����ϴ�!");

	this->Money -= money;
}

void Account::Print() const
{
	cout << "��    �� : " << Name << endl;
	cout << "���¹�ȣ : " << AccountNumber << endl;
	cout << "��    �� : " << Money << endl;
}