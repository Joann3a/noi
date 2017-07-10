#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int n, i, s1=0, s5=0, s10=0, x;
	
	cin >> n;
	
	for (i=1; i<=n; i++)
	{
		cin >> x;
		if (x==1)  s1++;
		if (x==5)  s5++;
		if (x==10) s10++;
	}
	
	cout << s1 << endl;
	cout << s5 << endl;
	cout << s10 << endl;
	return 0;
}
