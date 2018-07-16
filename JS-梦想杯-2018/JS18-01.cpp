#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int i;
	int a=0,b=0;
	for(i=1;i<n;i++)
	{
		a=a+2;
		b=b+a;
	}
	b=b+i-1;
	cout<<b<<endl;	
	return 0;
}

