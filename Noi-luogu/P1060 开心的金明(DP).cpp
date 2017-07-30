#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int a[30];
int c[30];
int w[60001];			//	0-60000;
const int M = 30000;	// 	M=30000
int main()
{
	int  n,m;
	
	cin>>n>>m;
	
	int i,j;
	for(i=0;i<m;i++)
	{
		cin>>a[i]>>c[i];
		int t=a[i]*c[i];
		for(j=n;j>=a[i];j--)
		{
			if(w[M+j]<w[M+j-a[i]]+t)
				w[M+j]=w[M+j-a[i]]+t; 
		}
	} 

	cout << w[M+n];

	return 0;
}

