#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string a[101],x;
	int n=0;
	while(cin>>x)
	{
		a[n]=x;
		n++;
	}
	
	sort(a,a+n);
	
	cout<<a[0]<<endl;
	for(int i=1;i<n;i++)
	{
		if(a[i]!=a[i-1])
			cout<<a[i]<<endl;
	}
	return 0;
}
