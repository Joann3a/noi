#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x[n];
	int y[n];
	int i;
	for(i=0;i<n;i++) cin >> x[i];
	
	sort(x,x+n);
	
	int last,j=1;
	last=x[0];
	cout << last <<' ';
	for(i=0;i<n;i++)
	{
		if(x[i]!=last) 
		{//new data
			cout<<x[i]<<' ';
			last=x[i];
		}
	}	
	return 0;
	
}
