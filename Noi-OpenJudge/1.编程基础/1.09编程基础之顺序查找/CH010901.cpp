#include <iostream>
using namespace std;

int main()
{
	int n,y;
	
	cin >> n;
	
	int x[n];
	for (int i=0;i<n;i++)
	{
		cin >> x[i];
	}
	
	cin >> y;
	for (int i=0;i<n;i++)
	{
		if(x[i]==y) 
		{
			cout << i+1;
			return 0;
		} 
	}
	cout << -1;
	return 0;
	
}
