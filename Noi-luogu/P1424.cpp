#include <iostream>
#include <cstdio>
#include <iomanip>
using  namespace std;

int main()
{//С��ĺ��� 
	int x;
	int n;
	int day;
	

	cin >> x >> n;//��x, n�� 
	int km =0;
	for (int i=1;i<=n;i++)
	{
		day = (x+i-1)%7;
		if ((day != 0)&&(day !=6)) 
			km =  km + 250;
	}
	cout << km;

	return 0;
}
