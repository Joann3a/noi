#include <iostream>
using namespace std;
int main()
{
	int n,m,i,j;
	cin >> n >> m; 
	char x[n+2][m+2];
	char s[n+2][m+2];
	
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin >> x[i][j];
			
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(x[i][j]=='*') s[i][j] = '*';
			else
			{	
				int sum=0;
				if (x[i-1][j-1]=='*') sum++;
				if (x[i-1][j  ]=='*') sum++;
				if (x[i-1][j+1]=='*') sum++;
				if (x[i][j-1]=='*') sum++;
				
				if (x[i][j+1]=='*') sum++;
				if (x[i+1][j-1]=='*') sum++;
				if (x[i+1][j  ]=='*') sum++;
				if (x[i+1][j+1]=='*') sum++;
				s[i][j]=sum+'0';
			}
		cout <<s[i][j];
		}
		cout << endl;
	}
	return 0;
}
