#include <cstdio> 
#include <iostream>
using namespace std;

int main()
{
	int x, bai, shi,ge;
	
	cin >> x;           // x = 123;
	bai = x / 100;      // bai =1;
	shi = x / 10 % 10;
	ge  = x % 10;
	
	cout << ge<<shi<<bai<<endl;
	return 0;
}
