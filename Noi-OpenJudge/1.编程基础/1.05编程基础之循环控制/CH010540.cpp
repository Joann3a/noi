#include <iostream>
using namespace std;
int main()
{
	int n,ge,x,s=0,i;
	cin >>n;
	for(i=1;i<=n;i++)
	{
		x=i;
		while(x!=0)
		{
			ge=x%10;
			if(ge==1)s++;
			x=x/10;
		}
	}
	cout << s;
	return 0;
}
