#include  <iostream>
#include <string>
#include <cstdio>
using namespace std;
bool cmp(float a,float b)
{
	return a>b;
}
int main()
{
	int n,i,y,x=0,z=0;
	string c;
	int a[n]={0},b[n]={0};
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		if(c=="male")
		{
			a[x]=y;
			x++;
		} 
		else
		{
			b[z]=y;
			z++;
		}
	}
	sort(a,a+y,cmp);
	sort(b,b+z);
	
	for(i=0;i<y;i++)
		printf("%.2f",a[i]);
	for(i=0;i<z;i++)
		printf("%.2f",b[i]);
	return 0;
}
