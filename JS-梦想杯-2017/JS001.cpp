#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x,y,t;
	double s;
	cin >> x >>y >>t;
	int s0=t*x;//�ڹ����ܵ� 
	int y0=y-x;//����ÿ��׷�ľ��� 
	double t1=(double)s0/(double)y0;//����׷����Ҫ����ʱ�� 
	s=(t1+t)*x; 
	 
	 
	cout << s0 << "  "<<y0;
	cout <<endl<<s	;
	return 0;
}

