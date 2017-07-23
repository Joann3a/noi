#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	float remain,total,ave;
	int i;
	
	total =0;
	for (i=0;i<12;i++)
	{
		cin >> remain;
		total =total + remain; 
	}
	ave = total /12;
	printf("$%.2f",ave);
	return 0;
}
