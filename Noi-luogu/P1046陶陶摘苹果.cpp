#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int h,a[11],i;

	for(i=1;i<=10;i++)
		cin >>a[i];
	cin >> h;
	h=h+30;
	
	int s=0; 
	for(i=1;i<=10;i++)
	{
		if (a[i]<=h) s++;
		
	}

	cout << s;
	return 0;
}
