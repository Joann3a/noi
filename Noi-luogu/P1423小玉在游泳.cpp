#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double m,x=0,y=2.0;
	int n=1;
	
	cin >> m;
	x=y;
	while(x<m)
	{
		y = 	y*0.98;
		x += 	y;
		n++;
	}
	cout << n << endl;
	return 0;
}
