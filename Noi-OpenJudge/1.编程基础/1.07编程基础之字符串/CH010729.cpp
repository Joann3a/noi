#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	//1. ÊäÈëISBNÂë¡£
	string isbn;
	cin>>isbn;
	
	int i,j,k,x[10],sum;
	j=0;
	sum=0;
	for(i=0;i<isbn.size()-1;i++)
	{
		if(isdigit(isbn[i]))
		{
			x[j]=isbn[i]-'0';
			sum += (j+1)*x[j];
			j++;
		}
	}
	
	if(isbn[i]=='X')
		x[j]=10;
	else
		x[j]=isbn[i]-'0'; 

	/*for(k=0;k<10;k++)
	{
		cout << x[k] <<endl;
	}
	*/ 
	int res;
	res=sum%11;
	
	if (res == x[j])
	{
		cout << "Right";
	}
	else
	{
		if (res!=10)
			cout <<x[0]<< '-'<< x[1]<< x[2]<< x[3]<< '-'<< x[4]<< x[5]<< x[6]<< x[7]<< x[8]<< '-' <<res;
		else
			cout <<x[0]<< '-'<< x[1]<< x[2]<< x[3]<< '-'<< x[4]<< x[5]<< x[6]<< x[7]<< x[8]<< '-' <<'X';
	}
	
	return 0;
}
