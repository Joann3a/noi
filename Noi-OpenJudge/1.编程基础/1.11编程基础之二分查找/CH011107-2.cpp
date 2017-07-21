#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); 
	int n;
	cin >> n;
	int i,a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum;
	cin >> sum;
	
	sort(a,a+n);
	
	
	i=0;
		 
	do
	{	//��Ҫ�Դ�i+1��ʼ���������������ֲ���
		//��Ҫ���ҵ���a[i],sum-a[i]��Ե���� 
		int L,r,m,x;
		L=i+1;
		r=n-1; 
		x=sum-a[i];
		while(L<=r)
		{
			m=(L+r)/2;
		
			if(a[m]==x)
			{//���������ҵ�������� 
				cout << a[i] << ' '<< x;
				return 0;
			}
			else
			{
				if(x<a[m])
				{
					r=m-1;
				}
				else
				{
					L=m+1;
				}
			}
		} 
		i++;
	}while(i<=a[n-1]/2);
	cout << "No";
	return 0;
	
}
