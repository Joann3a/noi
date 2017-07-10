#include <iostream>
using namespace std;
int main()
{
	int j,i,n,m,f;
	char ch;
	cin>>n>>m>>ch>>f;
	if(f==1)
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cout <<ch;
		cout <<endl;
	}
	else
	{
		for(i=0;i<m;i++)
		cout <<ch;
		cout <<endl;
		
		for(i=1;i<=n-2;i++)
		{
			cout <<ch;
			for(j=1;j<=m-2;j++)
			cout <<' ';
			cout <<ch;
			cout <<endl;
		}
		for(i=0;i<m;i++)
		cout <<ch;
		cout <<endl;
	}
	return 0;
}
 
