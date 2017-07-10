#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, x, sum=0;
	double ave;
	
	cin >>n;   //n=4
	
	for (int i=1; i<=n; i++)
	{
        cin >> x; 
		sum += x;	
	}
	
	ave = sum*1.0 / n;
	
	cout << sum<<' '<<fixed << setprecision(5) << ave << endl;
    // printf("%d %.5lf\n", sum, ave);	
	return 0;
}
