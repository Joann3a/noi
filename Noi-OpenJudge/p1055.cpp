#include <iostream>
using namespace std;
int main()
{
	string a;
	int i,sum=0,j=1,c;
	cin>>a;
	for(i=0;i<=10;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			sum+=j*(a[i]-48);
			j++;
		}
	}
	
	c=sum%11;
	char b;
	if(c==10)
		b='X';
	else
		b=c+48;
	
	if(a[12]==b)
		cout<<"Right";
	else
	{
		a[12]=b;
		cout<<a;
	}
	return 0;
}
