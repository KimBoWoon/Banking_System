//#ifndef __EXCEPTION__
#define __EXCEPTION__

<<<<<<< HEAD
=======
#include "String.h"

>>>>>>> origin/master
class Exception
{
private:
	String s;
public:
	Exception(String s) : s(s)	{}
	void ShowExceptionInfo()
	{
		cout << s << endl;
	}
	//void MeunNumberException();
};

//#endif