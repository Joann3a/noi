#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int w, cost=8, x;
	char ch;
	
	cin >> w >> ch;
	
	if (ch=='y')  cost += 5;
	
	if (w>1000)
	{ 
        int cha;
		cha = w - 1000;
		int x = cha/500;
		if (cha % 500!=0) x++;
	    cost += x*4;
    }
	
	cout << cost << endl;
	return 0;
}
