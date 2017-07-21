#include <iostream>
//#include <cstdio>
using namespace std;

int main()
{
	int n,i,j,y,t,j1,y1,t1;
	
	cin >> n;
	j1 = 0;
	y1 = 0;
	t1 = 0;
	
	for (i=0;i<n;i++)
	{
		cin >> j >> y >> t;
		j1 = j1 + j;
		y1 = y1 + y;
		t1 = t1 + t; 
	}

	cout << j1 << ' ' << y1 << ' '<< t1 << ' ' << j1+y1+t1;
	return 0;
 } 
