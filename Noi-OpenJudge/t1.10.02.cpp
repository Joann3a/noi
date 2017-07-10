#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int n,x,i;
	cin>>n;
	int a[n],j=0;
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x%2==1)
		{
			a[j]=x;
			j++;
		}
	}
	
	sort(a,a+j);
	
	cout<<a[0];
	for(i=1;i<j;i++)
	cout<<','<<a[i];
	
	return 0;
}
