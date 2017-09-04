#include <iostream>
#include <algorithm>

using namespace std;

int d[3000];
int c[3000];

int main()
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin >>d[i];
	}
	
	for(int i=0;i<n-1;i++)
	{
		c[i]=abs(d[i+1]-d[i]);
	}
	
	sort(c,c+n-1);
	int flag=0;
	for	(int i=0;i<n-2;i++)
	{
		if(c[i+1]!=c[i]+1) 
		{
			flag=1;
			cout<<"Not jolly"<<endl;
			break;
		}
	}
	
	if(flag==0)
		cout <<"Jolly";
	return 0;	
	
	
}
