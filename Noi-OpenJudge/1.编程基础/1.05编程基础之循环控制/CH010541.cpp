#include <iostream>
using namespace std;
int main()
{
	int n,m,ge,x,s=0,i;
	cin >>n>>m;
	for(i=n;i<=m;i++)
	{
		x=i;
		while(x!=0)
		{
			ge=x%10;
			if(ge==2)s++;
			x=x/10;
		}
	}
	cout << s;
	return 0;
}
