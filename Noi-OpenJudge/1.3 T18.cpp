#include <cstdio> 
#include <iostream>
using namespace std;

int main()
{
	int a, b, n;
	
	cin >> a >> b >> n;     // 1 4 100
	
	cout << a+(b-a)*(n-1)<< endl;
	return 0;
}
