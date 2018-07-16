#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int year[3001];
int days[3001];
int d11[3001];
int weekday[3001];

int runnian(int y)
{
	int flag;
	flag=0;
	if((y%100!=0)&&(y%4==0)||(y%400==0))
	{
		flag=1;
	}
	return flag;
}

int main()
{
	int y1,y2;
	cin>>y1>>y2;
	

	int d=31+28+31+30+31+30+31+31+30+31+11;	//11.11 
	
	int i;	
	for(i=1900;i<=3000;i++)
	{
		year[i]		= 365+runnian(i);
		days[i]		= days[i-1]+year[i];
		d11[i]		= days[i-1]+d;
		weekday[i]	= d11[i]%7;
	}
	
	int luckdays=0;
	for(i=y1;i<=y2;i++)
	{
		if((weekday[i]==6)||(weekday[i]==0)) 
		{
			luckdays++;
			cout<<luckdays<<' '<<i<<' '<<weekday[i]<<endl;
		}
	}
	cout<<luckdays<<endl;

	return 0;
}

