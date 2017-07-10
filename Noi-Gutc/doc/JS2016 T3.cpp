#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, pos, i, j;
	cin >> n >> k >> pos;
																	
	int a[n/2+1], b[n/2+1], c[n+1];
																
	for (int i=1; i<=n; i++)  c[i]=i;
																
	for (i=1; i<=k; i++)
	{
		for (j=1; j<=n/2; j++)
			a[j]=c[j];
		
		for (j=n/2+1; j<=n; j++)
			b[j-n/2]=c[j];
			
		for (j=1; j<=n/2; j++)
		{
			c[2*j-1]=a[j];
			c[2*j]=b[j];
		} 
	}
		
	cout << c[pos];
		
	return 0;
}
 
