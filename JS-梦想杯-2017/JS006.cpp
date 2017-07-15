#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int R[100];

int initR(int n,int R0)
{
	int i; 
	R[0]=R0;
	for(i=1;i<n;i++)
	{
		R[i]=(R[i-1]*6807+2831)%201701; 
//		cout << R[i]<<' '; 
	} 
//	cout << endl;
	for(i=0;i<n;i++)
	{
		R[i]=R[i]%100; 
		cout << R[i]<<' '; 
	} 
	cout <<endl; 
	return 0;
 } 
 

 
int main()
{
	int n,R0;
	cin >>n>> R0; 
	initR(n,R0);

	return 0;
}

