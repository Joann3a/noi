#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); 
	long long n,sum;
	cin >> n;
	long long i,a[n];
	
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}

	cin >> sum;//6
	
	sort(a,a+n);
	
	i=0;
	do
	{
		long long x;
		x=sum-a[i];//需要查找的另外一个数 
		if(binary_search(a+i+1,a+n,x))
		{
			cout << a[i] <<' ' <<sum-a[i];
			return 0;
		}
		i++;
	}while(a[i]<=(sum/2));
	cout << "No" ;
	return 0;
}
