#include <iostream>
#include <cmath>
#include <cstdio>
//	Author: Joanna 25/07/17 21:16

#include <algorithm>
using namespace std;
struct stu
{
	int id,fs;
}a[5001];

bool cmp(stu x,stu y)
{
	if(x.fs!=y.fs)
		return x.fs>y.fs;
	else
		return x.id<y.id;
}
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	m=m*1.5;
	for(i=1;i<=n;i++)
		cin>>a[i].id>>a[i].fs;
	
	sort(a+1,a+1+n,cmp);
	
	j=m;
	
	/*int maxvalue=a[m].fs;
	i=1;
	while(a[i].fs<=a[m].fs)
	{
		cout<<;
		i++;
	}
	*/
	do{
		j++;
	}while(a[j].fs == a[m].fs && j<=n);
	
	//cout<<endl;
	cout<<a[j-1].fs<<' '<<j-1<<endl;
	for(i=1;i<=j-1;i++)
	{
		cout<<a[i].id<<' '<<a[i].fs<<endl;
	}
	return 0;
}
