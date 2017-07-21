#include <iostream>
using  namespace std;

int main()
{//级数求和 
	int k, n; 
	double s; 
	
	cin >> k; 

	s = 1;
	n=1;
	do
	{
		n++;
		s = s+1.000000000/n;
		//cout << s << endl;
	} while(s<k);
	cout << n;
	return 0;
}
