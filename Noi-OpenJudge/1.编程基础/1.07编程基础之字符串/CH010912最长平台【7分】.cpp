#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	cin >>n;
	
	if(n==0) {
		cout<<0;
		return 0;
	}
	
	int a[n];	
	int i;
	for(i=0;i<n;i++) cin >>a[i];
	
	int max=1;//�ƽ̨ 
	int cur=1;//��ǰƽ̨ 
	
	for(i=1;i<n;i++)
	{
		if(a[i]==a[i-1]) cur++;
		else{
			if(cur>max) max=cur; 
			cur=1;
		} 
	}
	cout<<max;
	return 0;
}

