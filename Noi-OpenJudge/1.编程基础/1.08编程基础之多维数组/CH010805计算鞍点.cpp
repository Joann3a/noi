#include <iostream>
using namespace  std;
int main()
{
	int a[5][5],i,L,f,j,k,maxv;
	//输入二维数组 
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)	
	{
		cin>>a[i][j];
	}
	
	for(i=0;i<=4;i++)
	{
		//---find the maxv
		maxv=a[i][0];
		L=0;
		for(j=0;j<=4;j++)
		{
			if (a[i][j]>maxv)
			{
				maxv=a[i][j];
				L=j;
			}
		}
		//---find the "鞍点 "
		f=0;
		for(k=0;k<=4;k++)
		{
			if(a[k][L]<maxv) 
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{//找到鞍点 
			cout<<i+1<<' '<<L+1<<' '<<maxv;
			return 0;
		}
	}
	if(f!=0)
	cout<<"not found";
	return 0;
}
