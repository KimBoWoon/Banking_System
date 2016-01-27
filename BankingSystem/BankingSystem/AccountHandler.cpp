#include "AccountHandler.h"
#include "HighCreditAccount.h"

AccountHandler::AccountHandler() : Tail(NULL), cur(NULL)
{
	Head = new Account("", -1, -1);
}
void AccountHandler::MakeAccount()
{
	char chioce;
	Account* NewNode;

	cout << "���� ����" << endl;
	cout << "1. ���뿹�ݰ��� 2. �ſ�ŷڰ���" << endl;
	cout << "���� : ";

	while (true)
	{
		cin >> chioce;
		cout << endl;

		if (chioce == '1')
		{
			NewNode = MakeNomalAccount();
			break;
		}
		else if (chioce == '2')
		{
			NewNode = MakeHighCreditAccount();
			break;
		}
		else
		{
			cout << endl << "�߸��� �Է��Դϴ�!" << endl;
			cout << "�ٽ� �Է��ϼ���!" << endl;
			continue;
		}
	}

	if (Head->Next == NULL)
		Head->Next = NewNode;
	else
		Tail->Next = NewNode;

	Tail = NewNode;
}
Account* AccountHandler::MakeNomalAccount()
{
	//char Name[10];
	String Name;
	int Money, AccountNumber, rate;

	cout << "���뿹�ݰ��� ����" << endl;
	cout << "��    �� : ";
	cin >> Name;
	cout << "���¹�ȣ : ";
	cin >> AccountNumber;
	cout << "�� �� �� : ";
	cin >> Money;
	cout << "�� �� �� : ";
	cin >> rate;

	return new NomalAccount(Name, AccountNumber, rate, Money);
}
Account* AccountHandler::MakeHighCreditAccount()
{
	//char Name[10];
	String Name;
	int Money, AccountNumber, rate, specrate;

	cout << "�ſ�ŷڰ��� ����" << endl;
	cout << "��    �� : ";
	cin >> Name;
	cout << "���¹�ȣ : ";
	cin >> AccountNumber;
	cout << "�� �� �� : ";
	cin >> Money;
	cout << "�� �� �� : ";
	cin >> rate;

	while (true)
	{
		cout << "�ſ��� : ";
		cin >> specrate;

		if (specrate == 1)
			return new HighCreditAccount(Name, AccountNumber, rate, 7, Money);
		else if (specrate == 2)
			return new HighCreditAccount(Name, AccountNumber, rate, 4, Money);
		else if (specrate == 3)
			return new HighCreditAccount(Name, AccountNumber, rate, 2, Money);
		else
		{
			cout << endl << "�߸��� �Է��Դϴ�!" << endl;
			cout << "�ٽ� �Է��ϼ���!" << endl;
			continue;
		}
	}
}
void AccountHandler::DepositORWithdraw(char choice)
{
	int Account, Money;

	cout << "���¹�ȣ : ";
	cin >> Account;

	cur = Head->Next;

	while (cur->AccountNumber != Account)
	{
		if (cur->Next == NULL)
		{
			cout << "���� ���� �ʴ� �����Դϴ�!";
			return;
		}
		else
			cur = cur->Next;
	}

	try
	{
		if (choice == '2')
		{
			cout << "�� �� �� : ";
			cin >> Money;
			cur->Deposit(Money);
			cout << "�Ա� �Ϸ�" << endl;
		}
		else if (choice == '3')
		{
			cout << "�� �� �� : ";
			cin >> Money;
			cur->Withdraw(Money);
			cout << "��� �Ϸ�" << endl;
		}
	}
	catch (Exception e)
	{
		e.ShowExceptionInfo();
	}
}
void AccountHandler::AllPrint()
{
	cur = Head->Next;

	while (cur != NULL)
	{
		cur->Print();

		cur = cur->Next;
	}
}
void AccountHandler::MenuView() const
{
	cout << "1. ���� ����" << endl;
	cout << "2. ��     ��" << endl;
	cout << "3. ��     ��" << endl;
	cout << "4. ��ü�� �ܾ���ȸ" << endl;
}