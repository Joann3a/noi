#include <iostream>
using namespace std;

int main()
{
	string a,sub;
	int i,j,n;
	bool hw(string a);
	
	cin>>a;
	n=a.size();
	for(i=2;i<=n;i++)
	 	for(j=0;j<=n-i;j++)
	 	{
	 		sub=a.substr(j,i);
	 		if(hw(sub))
	 			cout<<sub<<endl;
	 	}
	return 0;
}

bool hw(string a)
{
	int r,L,n;
	n=a.size();
	r=n-1;
	L=0;
	while(L<=r)
	{
		if(a[L]==a[r])
		{
			L++;
			r--;
		}
		else
		{
			return false;
		}
	}	
	return true;
}
