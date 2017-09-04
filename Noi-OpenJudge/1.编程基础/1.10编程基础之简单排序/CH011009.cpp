#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int a[1001]={0},k=0,x,i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(a[x]==0)
		{
			a[x]=1;
			k++;
		}
	}
	
	cout<<k<<endl;
	for(i=0;i<1001;i++)
	{
		if(a[i]==1)
			cout<<i<<' ';
	}
	return 0;
}
