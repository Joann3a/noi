#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
	string s;
	cin >> s;
	int bits;
	bits=s.length()-1;//不计算尾部的# 
	int a[bits];
	int data=0,left,right,left_flag=0,right_flag=0; 
	for(int i=0;i<bits;i++)
	{
		a[i]=s[i]-'0';
		data=data*10+a[i];
	}
	
	left=0;
	right=pow(10,bits);
	sort(a,a+bits);
	int temp;
	while(next_permutation(a,a+bits))
	{
		temp=0;
		for(int i=0;i<bits;i++)
		{
			temp=temp*10+a[i];
		}
		if((temp<data) && (temp>left )) 
		{
			left  = temp;
			left_flag = 1;
		}
		if((temp>data) && (temp<right)) 
		{
			right = temp;
			right_flag =1;
		}
	} 
	
	if(right_flag==1) cout << right <<' ';
	else cout << "NO ";
	
	if(left_flag==1) cout << left <<' ';
	else cout << "NO ";

	return 0;
}

