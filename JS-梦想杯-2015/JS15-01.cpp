#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int p[1001];//选票 
int stu[1001];//学生票数 
 
int main()
{
	int n,i,x;
	cin >> n >>x;
	p[1]=x;
	for(i=2;i<=n;i++)
	{
		p[i]=(p[i-1]*37+33031)%n+1; 
	}
	
	for(i=1;i<=n;i++)
	{
		stu[p[i]]++;
	}	

	int max=0;
	for(i=1;i<=n;i++)
	{
		if(stu[i]>max) max=stu[i];
	}
	
	for(i=1;i<=n;i++)
	{
		if(stu[i]==max) cout<<i;
	}

	return 0;
}

