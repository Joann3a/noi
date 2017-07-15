#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int Random(int n,int x)
{
	int i=0;
	int R[n];
	R[0]=x;
	for(i=1;i<n;i++)
	{
		R[i]=(R[i-1]*6807+2831)%201701; 
	}
	for(i=0;i<n;i++) cout << R[i] << " ";
	return 0;
		
}


int main()
{
	int n,R0,i,j;
	cin >> n >> R0; 
	int R[n];
	
	R[0]=R0;
	for(i=1;i<n;i++)
	{
		R[i]=(R[i-1]*6807+2831)%201701; 
	}
	
	for(i=0;i<n;i++)
	{
		R[i]=R[i]%10;
		cout << R[i] << " ";
	}
	cout << endl; 
	
	int s=0; 
	int maxleft,maxright,k;
	maxleft=0;
	maxright=0; 
	for(j=1;j<n-2;j++)//��Ϊ�������߿϶����ÿ� 
	{
		int s1=0;
		for(i=0;i<10;i++)
		{//Look i�У�j�е���
			//1. �ȿ��ڲ�����Ƭ�߶���
			if(i<=R[j]) continue; 
			//2. �ٿ�������û�иߵģ��о�+1, û�о�+0 
			//if(j==0) break; 
			//if(j==n-1) break;
			for(k=0;k<j;k++) 
			{
				if(R[k]>maxleft) maxleft = R[k];
			}
			for(k=j+1;k<n;k++) 
			{
				if(R[k]>maxright) maxright = R[k];
			}
			if((i<=maxleft)&&(i<=maxright)) 
			{
				s++;
				s1++; 
			}
	
		}
		cout << j<<"---->"<< s1 <<",�ܺ�-->"<<s<<endl;
			 
	}
	
	cout << s;
	
	
	return 0;
}

