#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	float a;
	float b;
	
	a = 1.000000001;
	b = a;
	printf("%.9f %.9f\n", a, b);
	return 0;	
 } 
