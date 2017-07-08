#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,k,i,j,s=0,t,f;
	cin>>n>>k;
	int a[n+1],b[k+1];
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=0;i<=k;i++) b[i]=i;
	
	while(b[0]==0)
	{
		t=0;
		for(i=1;i<=k;i++)
		{
			t+=a[b[i]];
		}
		f=1;
		for(i=2;i<=int(sqrt(t));i++)
		{
			if(t%i==0)
			{
				f=0;
				break;
			}
		}
		if(f==1)
		{
			cout<<t<<" ";
			s++; 
	    }
		j=k;
		while(b[j]==n-k+j)
		{
			j--;
		}
		b[j]++;
		for(i=j+1;i<=k;i++) b[i]=b[i-1]+1;
	}
	
	cout<<endl<<s<<endl;
	return 0;
}
