#ifndef __EXCEPTION__
#define __EXCEPTION__

#include "String.h"

class Exception
{
private:
	String s;
public:
	Exception(String s);
	void ShowExceptionInfo();
	//void MeunNumberException();
};

#endif