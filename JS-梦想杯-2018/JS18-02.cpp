#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,c;
	int x;
	int i;
	cin >>a>>b>>c;
	
	int maxv;
	if(a>b) 	maxv=a;
	else		maxv=b;
	
	if(c>b) 	maxv=c;

	int maxc=1;
	for(i=2;i<=maxv/2;i++)
	{
		if((a%i==0)&&(b%i==0)&&(c%i==0)) maxc=i;
	}
	cout<<maxc;

	return 0;
}

