#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int L[10001];
int S[10001];

int main()
{
	int n,m,L1,S1,i; 
	cin>>n>>m>>L1>>S1;
	//INIT Ln
	L[1]=L1;
	S[1]=S1;
	for(i=2;i<=n;i++)
	{
		L[i]=(L[i-1]*37011+10193)%10000+1;	//INIT Ln
		S[i]=(S[i-1]*73011+24793)%100+1;	//INIT Sn
	}
	

	 
	 


	return 0;
}

