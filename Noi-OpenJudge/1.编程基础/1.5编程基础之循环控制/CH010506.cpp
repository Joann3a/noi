#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n,i,a,min,max;
	
	cin >> n;
	
	
	 
	for (i=0;i<n;i++)
	{
		cin >> a;
		if (i==0)
		{//�������ô����ֱ�������渳ֵΪ0������ܳ��� 
			max =a;
			min =a;
		}
		else
		{
			if (a > max ) max = a;
			if (a < min ) min = a;
		}
	}

	cout << max-min;
	return 0;
 } 
