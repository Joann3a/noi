#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int a[10]={2,4,1,23,5,76,0,43,24,65}, i;
	for(i=0;i<=9;i++)
	{
		cout<<a[i]<<' ';
	}
	
	sort(a,a+10);
	
	for(i=0;i<=9;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}
