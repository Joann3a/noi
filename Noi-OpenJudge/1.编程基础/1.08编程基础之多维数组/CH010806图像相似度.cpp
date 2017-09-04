#include <iostream>
#include <cstdio>

using namespace std;

int a[100][100];
int b[100][100];

int main()
{
	int m,n;
	cin >>m>>n;
	
	int i,j;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			cin>>b[i][j];
		}
	}	

	int p_all=0,p_like=0;
	p_all=m*n;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[i][j]==b[i][j]) p_like++;
		}
	}
	
	float similary;
	similary=(float)p_like/(float)p_all*100;	//Notice1: 
	printf("%2.2f%",similary);					//Notice2: should include "cstdio" 
	return 0;

}

