#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int n,i;
	cin>>n;
	int a[n+1];
	for(i=1;i<=n;i++) a[i]=i;
	
	do{
		cout<<a[1];
		for(i=2;i<=n;i++) cout<<" "<<a[i];
		cout<<endl;
	}while(next_permutation(a+1,a+n+1));
	
	return 0;
}
