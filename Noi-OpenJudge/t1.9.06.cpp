#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	string a;
	int i,max,cha,min;
	cin>>a;
	int x[26]={0};
	for(i=0;i<a.size();i++)
	{
		x[a[i]-'a']++;
	}
	max=0,min=100;
	for(i=0;i<=25;i++)
	{
		if(x[i]>max)
			max=x[i];
		if(x[i]!=0&&x[i]<min)
			min=x[i];
	}
	cha=max-min;
	
	if(cha==0||cha==1)
	{
		cout<<"No Answer"<<endl<<'0'<<endl;
		return 0;
	}	
	
	for(i=2;i<=sqrt(cha);i++)
	{
		if(cha%i==0)
		{
			cout<<"No Answer"<<endl<<'0'<<endl;
			return 0;
		}
	}
	cout<<"Lucky Word"<<endl<<cha<<endl;
	return 0;
}
