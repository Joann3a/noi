#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	char x;
	
    x=getchar();    //scanf("%c", &x); 
	
	if (x%2==1)
	   cout << "YES" << endl;
	else
	   cout << "NO" << endl;
	
	return 0;
}
