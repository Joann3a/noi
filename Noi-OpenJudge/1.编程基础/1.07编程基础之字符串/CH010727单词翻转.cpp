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
	
	int i=0; 
	while(i<s.size())
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
		i++;
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

