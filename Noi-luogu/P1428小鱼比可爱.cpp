#include <iostream>
#include <cmath>
#include <cstring>


using namespace std;

int main()
{
	int n,i,j;
	cin >> n;
	int a[n];
	int b[n]; 
	
	// ‰»Îø…∞Æ÷µ 0-(n-1)
	for (i=0;i<n;i++) cin >> a[i];
	
	
	b[0]=0;
	for (i=1;i<=n-1;i++)
	{
		b[i]=0;
		for(j=0;j<i;j++)
		{
			if (a[j]<a[i]) b[i]++;
		}
	 } 
	 
	 
	for (i=0;i<=n-1;i++) cout << b[i] <<  ' '; 
	
	return 0;
}
