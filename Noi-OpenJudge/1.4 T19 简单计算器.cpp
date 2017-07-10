#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char fu;
	
	cin >> a >> b >> fu;
	
	if (fu=='+')
	   cout << a+b;
	else if (fu=='-')
	   cout << a-b;
	else if (fu=='*')
	   cout << a*b;
	else if (fu=='/')
	   if (b==0)
	      cout << "Divided by zero!";
	   else
	      cout << a/b;
	else
	   cout << "Invalid operator!"; 
	
	return 0;
}
