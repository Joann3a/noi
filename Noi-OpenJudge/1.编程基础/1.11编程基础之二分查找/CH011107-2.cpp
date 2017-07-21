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
	{	//需要对从i+1开始到最后的数据做二分查找
		//需要查找的是a[i],sum-a[i]配对的情况 
		int L,r,m,x;
		L=i+1;
		r=n-1; 
		x=sum-a[i];
		while(L<=r)
		{
			m=(L+r)/2;
		
			if(a[m]==x)
			{//在数组中找到了这个数 
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
