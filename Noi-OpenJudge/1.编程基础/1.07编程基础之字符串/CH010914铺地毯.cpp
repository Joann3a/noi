#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int a[110];
int b[110];
int g[110];
int k[110];

int main()
{
	int n;
	
	//1. Get the count of the Carpet 
	cin >>n;
	int i;
	
	//2. Get the Propety of the Carpet 
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	
	//3. Get the Point which want to position 
	int x,y;
	cin>>x>>y;
	
	//4. Find the Carpet 
	int number=-1;
	for(i=0;i<n;i++)
	{
		if((x>=a[i])&&(x<=a[i]+g[i])&&(y>=b[i])&&(y<=b[i]+k[i]))
		{
			number=i+1; 
		}
	}
	cout <<number;


	return 0;
}

