#include <iostream>
#include <cmath>
#include <cstring>


using namespace std;

int main()
{
	int n, m,i,j,left,right; 
	
	cin >> n >> m;
	short f[n+1];
	
	for(i=1;i<=n;i++) f[i]=1; 
	
	for(i=1;i<=m;i++)
	{
		cin >> left >> right;
		for(j=left;j<=right;j++)
			f[j] =0;
	}
	//test 
	/*for(i=1;i<=n;i++) cout << f[i] <<" ";
	cout << endl; 
	*/ 
	
	int s=0;
	for(i=1;i<=n;i++)
	{	
		if(f[i]==1) s++; 
	}
	
	cout << s;
	return 0;
}
