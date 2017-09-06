#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	
	string word="";
	string invword="";
	
	int i=s.size()-1;
	 
	while(i>=0)
	{
		if(s[i]!=' ')
		{
			word+=s[i]; 
		}
		else
		{//µ¥´Ê½áÊø 
			int j=word.size();
			while(j>0)
			{
				j--;
				cout<<word[j];
			} 
			cout<<' '; 
			word=""; 
		}
		i--;
	}
	
	int j=word.size();
	while(j>0)
	{
		j--;
		cout<<word[j];
	} 
	cout <<endl; 
	
	return 0;
}

