#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n+1];
	
	int f=0, maxv=-1000;
	for (int i=1; i<=n; i++)
	{
		cin >> a[i];
	    if (a[i]>maxv)  maxv=a[i];
		if (a[i]>=0)  f=1;
	}
	
	if (f==0) 
	{
		cout << maxv;
		return 0;
	}
	
	int s=0;
	maxv=-1000;
	
	for (int i=1; i<=n; i++)
	{
		s+=a[i];
		if (s<0) 
		   s=0;
		else
		   if (s>maxv)  maxv=s;
	}
	
	cout<<maxv;
	return 0;
}
