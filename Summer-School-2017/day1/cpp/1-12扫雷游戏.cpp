#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int n,i,j,s=0;
	cin>>n;
	int a[n+1],b[n+1];
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=n;i++) b[i]=0;
	
	while(1)
	{
		x:j=n;
		while(b[j]==1)
		{
			b[j]=0;
			j--;
		}
		b[j]=1;
		if(b[1]+b[2]!=a[1]) goto x;
		if(b[n-1]+b[n]!=a[n]) goto x;
		for(i=2;i<=n-1;i++) if(b[i-1]+b[i]+b[i+1]!=a[i]) goto x;
		
		break;
	}
	
	cout<<b[1];
	for(i=2;i<=n;i++)
	{
		cout<<" "<<b[i];
		s+=b[i];
	}
	
	cout<<endl<<"L="<<s<<endl;
	return 0;
}
