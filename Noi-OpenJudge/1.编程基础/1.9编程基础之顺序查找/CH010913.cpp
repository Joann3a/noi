#include <iostream>
using namespace std;
int main()
{
	int a[101]={0},i,n,x;
	cin>>n;
	
	for (i=1;i<=n;i++)
	{
		cin>>x;
		if(a[x]==0)
		{
			cout << x<< ' ';
			a[x]=1;
		}
	}
	return 0;
}
