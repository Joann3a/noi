#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int x)
{
	if(x<=1) return false;
	int i,n=sqrt(x);
	for(i=2;i<=n;i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n<=4)
		{
			cout<<"empty";
			break;
		}
		else if(isPrime(i)&&isPrime(i-2))
			cout<<i-2<<' '<<i<<endl;
	}
	return 0;
}
