/*#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int a, r=0, sum=0;
    
    for (int i=1; i<=12; i++)
    {
    	cin >> a;
    	if (r+300<a)
        {   
		   cout<<'-'<<i<<endl;
		   return 0; 
		}
		else
		{
			sum += (r+300-a)/100*100;
			r = (r+300-a) % 100;
		}
    }
    
    cout << r + sum*(1+0.2) << endl;
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
	int a,r=0, sum=0;
	for (int i=1;i<=12;i++)
	{
		cin>>a;	//ѭ������12����Ҫ����Ǯ  
		if (r+300<a)//�ǲ��ǳ�Ϊ���ʲ��� 
		{
			cout<<'-'<<i<<endl;
			return 0;
		}
		else
		{
			sum+=(r+300-a)/100*100;//��������Ĵ�� 
			r=(r+300-a)%100;	//�����Լ�ʣ���Ǯ 
		}
	}   
	cout << r+sum*(1+0.2)<<endl;
	return 0;
 } 
 
