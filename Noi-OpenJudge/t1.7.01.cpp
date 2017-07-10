#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	string s;
	getline (cin,s);
	int i,total=0;
	for(i=0;i<s.size();i++)
		if(isdigit(s[i]))
			total++;
	
	cout<<total;
	return 0;
}
