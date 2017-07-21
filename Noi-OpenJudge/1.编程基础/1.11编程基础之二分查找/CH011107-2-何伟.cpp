#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); 
	long long i,m,n;
	cin >> n;
	long long a[n];
	
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	
	cin >> m;
	i=0;
	
	do
	{
		long long x=m-a[i];	
		if(binary_search(a+i+1,a+n,x))
		{
			cout << a[i] <<' ' <<x <<endl;
			return 0;
		}
		i++; 
	}while(a[i]<=m/2);//等会看看这句 
	cout << "No" ;
	return 0;
}
