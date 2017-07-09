/*
	Name: wangzhiping
	Copyright: 
	Author: 
	Date: 08/07/17 22:51
	Description: 
*/

#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int x)
{
	int i;
	int t=sqrt(x);
	for(i=2;i<=t;i++)
	{
		if(x%i==0) return false;
	}
	return true;
}

int main()
{
	int n,k,i,a[16],b[16];//because 15 intergers is limited at here
	cin >>n>>k;
	for(i=1;i<=n;i++) 
		cin >> a[i];

	//n个数里面取k个数 
	for(i=0;i<=k;i++) b[i]=i;
	
	int j;
	int sum;
	int count =0;
	while(b[0]==0)
	{
		//一个新格局，把和计算出来，并判断是否为素数 
		sum=0;
		for(i=1;i<=k;i++) 
		{
			sum=sum+a[b[i]];
			cout<<a[b[i]]<<' ';
		}
		cout << sum <<endl;
		
		if(isPrime(sum)) {
			count++;
			cout << "Prime" <<endl;
		}
			count++;
		j=k;
		while(b[j]==n-k+j) 	j--;//？？执行不了 
		b[j]++;
		for(i=j+1;i<=k;i++) b[i]=b[i-1]+1;	
	
	}

	cout<<count;
	
	return 0;
}
