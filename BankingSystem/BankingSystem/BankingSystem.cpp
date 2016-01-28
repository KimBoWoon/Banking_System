#include "AccountHandler.h"
#include "String.h"

#pragma warning(disable:4996)

int main()
{
	char Menu;
	AccountHandler ah;

	try
	{
		while (true)
		{
			ah.MenuView();
			scanf("%c", &Menu);
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