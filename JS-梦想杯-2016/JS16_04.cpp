#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int R[1001]; 
char S1[1001];
char S2[1001];


int main()
{
	int i,n,s;
	cin>>n>>s;
	
	R[0]=s;
	for(i=1;i<=n;i++) 
	{
		R[i]=R[i-1]*345%19997;
		S1[i]='a'+R[i]%26; 
		cout << S1[i]; 
	}
	
	for(i=n+1;i<=2*n;i++) 
	{
		R[i]=R[i-1]*345%19997;
		S2[i-n]='a'+R[i]%26; 
		cout << S2[i-n]; 
	}

	return 0;
}

