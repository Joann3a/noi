#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, x, sum=0; 
	float ave;
	
	cin >> n;
	
	for (int i=1; i<=n; i++)
	{
		cin >> x; 
		sum += x;
    }
	
	ave = sum*1.0 / n; 
	cout << fixed<<setprecision(2)<<ave;   //printf("%.2f", ave);
	return 0;
}
	
		
  
