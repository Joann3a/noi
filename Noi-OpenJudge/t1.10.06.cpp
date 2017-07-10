#include <iostream>
#include <algorithm>
using namespace std;
bool cmp (int a,int b)
{
	return a>b;
}
int main()
{
	int ji[10]={0},ou[10]={0},i,j=0,k=0,x;
	for(i=0;i<10;i++)
	{
		cin>>x;
		if(x%2==0)
		{
			ou[j]=x;
			j++;
		}
		else
		{
			ji[k]=x;
			k++;
		}
	}
	
	sort(ji,ji+k,cmp);
	sort(ou,ou+j);
	
	for(i=0;i<k;i++)
		cout<<ji[i]<<' ';
		
	for(i=0;i<j;i++)
		cout<<ou[i]<<' ';
	
	return 0;
}
