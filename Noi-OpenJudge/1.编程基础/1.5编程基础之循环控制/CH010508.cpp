#include <iostream>
//#include <cstdio>
using namespace std;

int main()
{
	int n,i,ang,sum;
	
	cin >> n;
	sum = 0;
	
	for (i=0;i<n-1;i++)
	{
		cin >> ang;
		sum = sum +ang;	
	}
	
	cout << (n-2)*180-sum;

	return 0;
 } 
