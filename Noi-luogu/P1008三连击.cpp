
//#include <cstdio>
/*#include <iostream>
using namespace std;

int main()
{
    int i, a[10];
    
    for (i=123; i<=329; i++)
    {
        a[1]=i/100;
        a[2]=i/10%10;
        a[3]=i%10;
        
        a[4]=2*i/100;
        a[5]=2*i/10%10;
        a[6]=2*i%10;
        
        a[7]=3*i/100;
        a[8]=3*i/10%10;
        a[9]=3*i%10;
        
        int s=0, p=1;
        for (int j=1; j<=9; j++)
        {
           s += a[j];
           p *= a[j];
        }
        
        if (s==45 && p==362880)
           cout<<i<<' '<<2*i<<' '<<3*i<<endl;
    }
    
    return 0;
}*/
 #include <iostream>
 using namespace std;
 int main()
 {
 	int i,a[10];
 	for (i=123;i<=329;i++)
 	{
 		a[1]=i/100;
 		a[2]=i/10%10;
 		a[3]=i%10;
 		a[4]=2*i/100;
 		a[5]=2*i/10%10;
 		a[6]=2*i%10;
 		a[7]=3*i/100;
 		a[8]=3*i/10%10;
 		a[9]=3*i%10;
 		int s=0,p=1;
 		for (int j=1;j<=9;j++)
 		{
 			s+=a[j];
 			p*=a[j];
 		}
 		if (s==45&&p==362880)
 		cout<<i<<' '<<2*i<<' '<<3*i<<endl;
 	}
 	
 	return 0;
 }

   



 
