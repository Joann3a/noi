#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	string str,str_ret;
	int pos1,pos2,pos3,len;
	cin >> str;
	len=str.size();
	
	pos1=str.find("er",len-2);
	pos2=str.find("ly",len-2);
	pos3=str.find("ing",len-3);
	
	if((pos1== len-2) || (pos2 == len-2))
		str_ret=str.substr(0,len-2);
	if(pos3== len-3) 
		str_ret=str.substr(0,len-3);
	
	if(str_ret.size()==0)
		cout << str << endl;
	else
		cout << str_ret << endl;
	
	return 0;
}
