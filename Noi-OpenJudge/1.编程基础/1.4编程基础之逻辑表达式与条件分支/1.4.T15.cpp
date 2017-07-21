#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if (a > c ) swap(a, c);  
	if (b > c ) swap(b, c);  
	
	cout << c << endl;
	return 0;
} 
