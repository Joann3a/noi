#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int i,a[5],b[4],j,t;
	string s="+-*";
	for(i=1;i<=4;i++) cin>>a[i];
	sort(a+1,a+4+1);
	
	do{
		for(i=0;i<=3;i++) b[i]=0;
		while(b[0]==0)
		{
			j=3;
			while(b[j]==2)
			{
				b[i]=0;
				j--;
			}
			b[j]++;
			t=a[1];
			for(i=1;i<=3;i++)
			{
				if(b[i]==0) t+=a[i+1];
				else if(b[i]==1) t-=a[i+1];
				else if(b[i]==2) t*=a[i+1];
			}
			if(t==24) cout<<a[1]<<s[b[1]]<<a[2]<<s[b[2]]<<a[3]<<s[b[3]]<<a[4]<<"=24"<<endl; 
		}
	}while(next_permutation(a+1,a+4+1));
	
	return 0;
}
