#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int i, a, sum;
	double n,ave;
	cin >> n;
	sum =0; 
	for (i=0;i<n;i++)
	{
		cin >> a;
		sum = sum + a;
	}
	ave = (float) sum/n;
	printf("%d %.5f",sum, ave);
	return 0;
 } 
