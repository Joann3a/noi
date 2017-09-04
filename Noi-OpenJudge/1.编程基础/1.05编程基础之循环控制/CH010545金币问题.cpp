#include <iostream>
using namespace std;
int main()
{
	int i=1,n,a=0,b=0;
	cin>>n;
	while(a+i<=n)
	{
		a+=i;
		b+=i*i;
		i++;
	}
	b+=(n-a)*i;
	cout << b<<endl;
	return 0;
}
