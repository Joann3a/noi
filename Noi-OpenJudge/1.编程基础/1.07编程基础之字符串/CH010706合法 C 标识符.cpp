#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	
	int n;
	n=s.size();
	
	if(isalpha(s[0])||s[0]=='_')
	{
		for(int i=1;i<=n-1;i++)
		{
			if(isalpha(s[i])||isdigit(s[i])||s[i]=='_')
			{
				
			}
			else
			{
				cout<<"no";
				return 0;			
			 } 
		}
	}
	else
	{
		cout<<"no";
		return 0;
	}	
	cout<<"yes"; 
	return 0;
		
}
