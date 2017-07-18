#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch(int* first,int* last, int num ) 
{
	int* L;
	int* r;
	int* m;
	L=first;
	r=last-1;
	m=(L+r)/2;
	do{
		if(num==*m) return m; 
		if(num<*m)	r=m-1;
		else   		L=m+1;
		m=(L+r)/2; 
	}while(L<=r); 
	return -1;
}

int main()
{
	int a[6]={1,2,3,6,19,100};
	int x;
	while(1)
	{
		cin>>x;
		cout << "status="binarysearch(a,a+6,x)<<endl;;
	}
	

	return 0;
}

