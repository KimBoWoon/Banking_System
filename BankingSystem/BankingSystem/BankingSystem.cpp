#include "AccountHandler.h"
#include <cstdlib>

#pragma warning(disable:4996)

int main()
{
	char Menu;
	AccountHandler ah;

//	try
//	{
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
			case '5':
				return 0;
			default:
				break;
			}

			system("pause");
			system("cls");
		}
//	}
//	catch (Exception e)
//	{
//		e.ShowExceptionInfo();
//	}
}