#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int main()
{
	string an="",bn="",ao,bo;
	getline(cin,ao);
	getline(cin,bo);
	int i;
	
	for(i=0;i<ao.size();i++)
	{
		if(isalpha(ao[i]))
		{
			if(ao[i]>='A'&&ao[i]<='Z')
				ao[i]+='a'-'A';
			an+=ao[i];
		}
	}	
	
	for(i=0;i<bo.size();i++)
	{
		if(isalpha(bo[i]))
		{
			if(bo[i]>='A'&&bo[i]<='Z')
				bo[i]+='a'-'A';
			bn+=bo[i];
		}
	}
	if(an==bn)
		cout<<"YES";
	else
		cout<<"NO";
	
	return 0;
}
