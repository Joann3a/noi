#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long n;
	short x;
	int s=0,y;
	
	cin >> n >> x;
	for(int i=1;i<=n;i++) 
	{
		int y=i;
		while (y!=0)
		{
			if(y%10==x) s++;
			y=y/10;
		}
	}	
	cout << s;
	return 0;
}
