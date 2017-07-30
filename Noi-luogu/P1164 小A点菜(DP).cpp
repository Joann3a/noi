#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int w[10000];
int f[10000]; 

int main()
{
	int n,m;		//n-²ËÆ·; m-money 
	int i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>w[i]; 
	} 
	
	f[0]=1;
	for(i=1;i<=n;i++)// scan the w[i] 
	{ 
		//cout<<"*******i="<<i<<"***********"<<endl;
		for(j=m;j>=w[i];j--)
		{
			f[j]=f[j] +f[j-w[i]];
			//for(k=0;k<=m;k++) cout<<f[k]<<" "; 
			//cout << endl;
		}

	} 
	cout<<f[m]<<endl;
	
	return 0;
}

