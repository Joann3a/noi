#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	cin >> a >> b;
	
	if (a>=60 && b<60  || a<60 && b>=60 )  
	   cout << '1'<<endl;
	else  
	   cout << '0'<<endl;

	return 0;
} 
