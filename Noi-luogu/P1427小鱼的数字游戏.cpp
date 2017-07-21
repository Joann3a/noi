#include <iostream>
#include <cmath>
#include <cstring>


using namespace std;

int main()
{
	int n,a[101]; 
	
	cin >> n; 
	int i=0;
	
	while(n!=0)
	{
		a[i]=n;
		i++;
		cin>>n;
	}
	
	for(int j=i-1;j>=0;j--)
		cout << a[j] <<" "; 
	 
	
	return 0;
}
