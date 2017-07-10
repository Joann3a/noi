#include <iostream>
using namespace std;
long long a[100001]={0},i;
int main()
{
	ios::sync_with_stdio(false);
	int x,m;
	cin>>x;
	for(i=0;i<x;i++) cin>>a[i];
	cin>>m;
	long b[m];
	for(i=0;i<m;i++) cin>>b[i];
	for(i=0;i<m;i++)
	{
		cout<<*lower_bound(a,a+x,b[i])<<endl;
	}
	return 0;
	
}
