#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x,s,y,ge;
	cin >> x;
	
	if(x>0)		s=1;
	else s =-1;
	
	x=abs(x);
	y=0;
	while(x!=0)
	{	
		ge = x%10;
		y= y*10+ge;
		x = x/10; 
	}
	 cout << s*y;
	 return 0;
}
