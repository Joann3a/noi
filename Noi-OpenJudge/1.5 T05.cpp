#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int n, x, maxv=0;
	
	cin >>n;   //n=5
	
	for (int i=1; i<=n; i++)
	{
        cin >> x; 
		if (x >maxv) maxv = x;	
	}
	
	cout << maxv<<endl;
	
	return 0;
}
