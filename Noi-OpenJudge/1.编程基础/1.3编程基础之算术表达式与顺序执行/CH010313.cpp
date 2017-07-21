#include <iostream>
using namespace std;

int main()
{
	int a;
	int ge,shi,bai;
	//float c;
	cin >> a; 
	
	if (100 < a < 999)
	{
		ge 	= a%10;
		shi = (a/10)%10;
		bai = a/100;
		cout << ge<<shi<<bai;
		return 0;
	}
	else return 1;
 } 
