#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int n, x, maxv=0, minv=10000;
	
	cin >>n;   //n=6
	
	for (int i=1; i<=n; i++)
	{
        cin >> x; 
		if (x > maxv) maxv = x;	
		if (x < minv) minv = x;
	}
	
	cout << maxv - minv <<endl;
	
	return 0;
}
