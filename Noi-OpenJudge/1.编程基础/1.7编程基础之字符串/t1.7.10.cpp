#include <iostream>
using namespace std;
int main ()
{
	string s;
	int i,x;
	getline(cin,s);
	s=s.size;
	for(i=0;i<x;i++)
	{
		if(isalpha(s[i]))
		{
			if(isalpha(s[i]-5))
				s[i]=s[i]-5;
			else
				s[i]=s[i]-5+26;
		}
	}
	cout<<s;
	return 0;
}
