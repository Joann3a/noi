#include <iostream>
using namespace std;

int main()
{
	int ge,shi,bai;
	int d7,d9;
	for(ge=1;ge<=6;ge++)
		for(shi=0;shi<=6;shi++)
			for(bai=0;bai<=6;bai++)
			{
				d7=ge+shi*7+bai*7*7;
				d9=bai+shi*9+ge*9*9;
				
				if(d7==d9) 
				{
					cout << d7<<endl;
					cout <<bai<<shi<<ge<<endl;
					cout <<ge<<shi<<bai<<endl;
					break;
				}
			}
	return 0;
}

