<<<<<<< HEAD
#include "AccountHandler.h"
<<<<<<< HEAD
#include "String.h"

#pragma warning(disable:4996)
=======
#include "Exception.h"

#pragma warning(disable:4996)
=======
#include "Define.h"
#include "AccountHandler.h"
>>>>>>> origin/master
>>>>>>> origin/master

int main()
{
	char Menu;
	AccountHandler ah;

	try
	{
		while (true)
		{
			ah.MenuView();
			cin >> Menu;
			cout << endl;

			switch (Menu)
			{
			case '1':
				ah.MakeAccount();
				break;
			case '2':
				ah.DepositORWithdraw(Menu);
				break;
			case '3':
				ah.DepositORWithdraw(Menu);
				break;
			case '4':
				ah.AllPrint();
				break;
			default:
				break;
			}

			system("pause");
			system("cls");
		}
	}
	catch (Exception e)
	{
		e.ShowExceptionInfo();
	}
}