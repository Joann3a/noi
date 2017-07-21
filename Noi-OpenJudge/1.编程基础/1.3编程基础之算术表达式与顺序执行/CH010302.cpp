#include <iostream>
#include <stdio.h> 
using namespace std;

int main()
{
	int a, b;
	//float c;
	cin >> a >> b; 
	
	double c;
	c=(double) a/b;
	
	printf("%.9lf", c);
	return 0;
 } 
