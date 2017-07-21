#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int x[101];
int score[101];

int main()
{
	int n,a,i;
	cin>>n>>a;
	x[1]=a;
	for(i=2;i<=n;i++)
	{
		x[i]=(x[i-1]*3703+1047)%n+1;
	}

	int count=0;
	int team=0;
	for(i=1;i<=n;i++)
	{
		if(x[i]==team) {
			//win again
			count++;
			if(count>3) count=3; 
			score[x[i]] += count;
		}
		else{//new team
			count=1;
			score[x[i]] += count; 
		}
		team=x[i]; 
	}
	
	int max=0;
	for(i=1;i<=n;i++)
	{
		if(score[i]>max) max=score[i]; 
	}
	
	cout<<max; 
	
	return 0;
}

