#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

bool About7(int x)
{
	if(x%7==0) return true;
	int gewei;
	while(x>0)
	{
		if(x%10==7) return true;
		x=x/10;
	}
	return false;
}
 
int main()
{
	int n;
	int i;
	int sum=0;
	cin>>n; 
	for(i=1;i<=n;i++)
	{
		if(!About7(i)) sum += i*i;
	}

	cout<<sum; 
	
	return 0;
}

