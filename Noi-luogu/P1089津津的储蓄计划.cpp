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
		cin>>a;	//循环输入12个需要花的钱  
		if (r+300<a)//是不是成为负资产？ 
		{
			cout<<'-'<<i<<endl;
			return 0;
		}
		else
		{
			sum+=(r+300-a)/100*100;//计算妈妈的存款 
			r=(r+300-a)%100;	//计算自己剩余的钱 
		}
	}   
	cout << r+sum*(1+0.2)<<endl;
	return 0;
 } 
 
