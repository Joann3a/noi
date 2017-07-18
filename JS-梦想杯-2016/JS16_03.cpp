#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int card[1001];
int up[501];
int down[501]; 
 
int main()
{
	int n,k,i;
	cin>>n>>k>>i;
	
	
	int m,j; 
	m=n/2;
	for(j=1;j<=n;j++) card[j]=j; 
	
	
	while(k>0)
	{
		int i_up=1,i_down=1;
		
		for(j=1;j<=m;j++)
		{
			up[j]=card[j];
			down[j]=card[m+j]; 
		}		
		
		for(j=1;j<=m;j++)
		{
			card[2*j-1]=up[j];
			card[2*j]=down[j]; 
		}
		
		
		//---------------- 
		k--; 
	} 
	cout<<card[i];
	return 0;
}

