#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
	string s1,s2,s11,s22;
	int n,j;
	getline(cin,s1);
	getline(cin,s2);
	n=s1.size();
	
	j=0;
	for(int i=0;i<n;i++)
	{
		if(s1[i]!=' ') 
		{
			if(s1[i]>='A' && s1[i]<='Z') 
			s1[i]=s1[i]+'a'-'A'; 
			s11[i]=s1[i];
			j++;
		}
	}

		
	j=0;
	n=s2.size();
	for(int i=0;i<n;i++)
	{
		if(s2[i]!=' ') 
		{
			if(s2[i]>='A' && s2[i]<='Z') 
			s2[i]=s2[i]+'a'-'A'; 
			s22[i]=s2[i];
			j++;
		}
	}	

	
	int n1,n2;
	n1=s11.size();
	n2=s22.size();
	if(n1!=n2) {
		cout <<"NO";
		return 0;
	} 
	for(int i=0;i<n1;i++)
	{
		if(s11[i]!=s22[i])
		{
		cout <<"NO";
		return 0;
		}
	}
	
	cout <<"YES";
	return 0; 
	
}
