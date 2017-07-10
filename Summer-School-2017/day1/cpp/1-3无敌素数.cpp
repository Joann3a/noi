
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
	int t,i;
	t=sqrt(x);
	for(i=2;i<=t;i++)
	{
		if(x%i == 0) return false;
	}
	return true;	
} 

bool isAllPrime(int x)
{
	int bit=0;
	int a[5]; //��Ŀ˵����������10000�����������5λ 
	while(x>0) 
	{
		a[bit]=x%10;	//����� 
		x=x/10;
		bit++;//��λ�� 
	} 
	
	sort(a,a+bit);//��С���� 
	int data=0;
	int t=0; 
	while(next_permutation(a,a+bit))
	{
		//����õ�һ���µĸ�� 
		data=0;
		for(int i=bit-1;i>=0;i--)
		{
			data = data*10+a[i];
		}
		if(!isPrime(data)) return false;
	}
	return true;
} 

int main()
{
	int s=0;
	for(int i=1;i<=10000;i++)
	{
		if(isPrime(i)) 
		{
			if(isAllPrime(i))
			{
				s++;
				cout<< i << endl;
			 } 
		} 
	}
	
	cout <<s;

	return 0;
}

