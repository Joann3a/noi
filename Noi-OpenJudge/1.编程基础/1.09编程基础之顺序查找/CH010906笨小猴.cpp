#include <iostream>
//#include <algorithm> 
#include <cmath> 
using namespace std;

int main()
{
	string word;
	cin >> word;
	
	int a[26]={0};//��������ĸ�ĸ��� 
	
	int i,n,index;
	n=word.size();
	for(i=0;i<n;i++)
	{//��word�ַ����е���ĸ��������a�� 
		index=word[i]-'a';
		a[index]++;
	} 
	
	//������������maxn��minn����ֵ 
	int maxn,minn;
	maxn=0;
	minn=100;
	for(i=0;i<26;i++)
	{
		if(a[i]>maxn) maxn=a[i];
		if(a[i]!=0 && a[i]<minn) minn=a[i];
	} 
	
	//�ж�maxn-minn�Ƿ�������
	int x,y;
	x=maxn-minn;
	y=sqrt(x);
	if(x>=2)
	{
		for (i=2;i<=y;i++)
		{
			if (x%i==0)
			{
				cout <<"No Answer" << endl;
				cout <<0;
				return 0; 
			} 
		}
		cout << "Lucky Word"<< endl;
		cout << x;
	 } 
	else
	{
		cout <<"No Answer" << endl;
		cout <<0;
	}
	return 0;	
}
