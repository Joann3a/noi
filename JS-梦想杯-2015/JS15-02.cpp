#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n%2==0) cout<<1+n;
	else cout<<(n+1)/2;
	return 0;
}

