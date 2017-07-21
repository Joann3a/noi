#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int x)
{
	if (x<2) return false;
	int i,q;
	q=sqrt(x);
	for(i=2;i<=q;i++)
	{
		if(x%i==0) return false;
	}
	return true;
}

int main()
{
	//0. Get the input n
	int n;
	cin >>n;
	 
	//1. get the prime set
	int i,maxlen=0,flag=0,len=0;
	for(i=4;i<=n;i++)
	{
		if(isPrime(i))
		{//Prime---->end;
			if(len>maxlen) maxlen=len;
			len=0;//Clean the len 
		}
		else
		{//Not Prime 
			len++;
		}
	}
	cout << maxlen; 


	return 0;
}

