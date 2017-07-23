//Author: Calvin Wang 23/07/17 22:32
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int q[70001];
int s[70001];

bool isSqrt(int x)
{
	int q;
	q=sqrt(x);
	if((x-q*q)==0) return true;
	return false;
 } 

int main()
{
	int n,k;
	int i,sum,count;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		q[i]=i;
	} 

	sum=0;
	for(i=1;i<=k;i++)
	{
		sum += q[i];
	 } 
	
	s[k]=sum;
	for(i=k+1;i<=n;i++)
	{// s[k+1]=s[k]+q[k+1]-q[1]; 
		s[i] = s[i-1]+q[i]-q[i-k];
	}
	
	count=0;
	for(i=k+1;i<=n;i++) 
	{
		if(isSqrt(s[i])) count++;
	}
	cout << count;
	return 0;
}

