#include <iostream>
using namespace std;
int main()
{
	int n,i;
	int f0,f1,f2;
		
	cin >> n;
	f0=1;
	f1=1;
	
	if (n<3)
		f2=1;
	else
	{
		for(i=2;i<n;i++)
		{
			f2=f0+f1;
			f0=f1;
			f1=f2;
		}
	}
	cout << f2;
	
	return 0;
}
