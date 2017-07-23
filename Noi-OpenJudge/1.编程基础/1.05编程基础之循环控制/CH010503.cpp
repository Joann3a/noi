#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,i;
	float a,he;
	cin >> n;
	he =0;
	for (i=0;i<n;i++)
	{
		cin >> a;
		he = he +a;
	}
	he = he/n;
	printf("%.4f", he);
	return 0;
}
