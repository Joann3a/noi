#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int data[7];// 

int main()
{
	int x;
	
	cin >>x;
	int s=0;
	int last,now,i;
	for(i=1;i<=x;i++) 
	{
		if((i%4==0)||(i%7==0)) {
			s++; 
			continue;//to skip the code to decide "44"&&"77" 
		}
		int t=i;
		
		
		last=t%10;
		t=t/10;
		while(t!=0)
		{
			now=t%10;
			if((last==4)&&(now==4)) {
				s++;
				last=now;
				t=t/10;
				break;
			} 
			if((last==7)&&(now==7)) {
				s++;
				last=now;
				t=t/10;
				break;
			} 
			last=now;
			t=t/10;			
		} 
		
	}

	cout <<s;

	return 0;
}

