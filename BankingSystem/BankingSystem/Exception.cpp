//
// Created by bw on 16. 1. 28.
//

#include "Exception.h"

Exception::Exception(String s) : s(s)	{}
void Exception::ShowExceptionInfo()
{
    cout << s << endl;
}