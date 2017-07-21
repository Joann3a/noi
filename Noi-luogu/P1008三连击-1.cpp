 #include <iostream>
 #include <cstring>
 
 using namespace std;
 int main()
 {
 	int i,p;
	int a[9]={0,0,0,0,0,0,0,0,0};
	int b[10]={0,0,0,0,0,0,0,0,0,0};
 	
 	for (i=123;i<=329;i++)
 	{
 		a[0]=i/100;
 		a[1]=i/10%10;
 		a[2]=i%10;
 		
 		a[3]=2*i/100;
 		a[4]=2*i/10%10;
 		a[5]=2*i%10;
 		
		a[6]=3*i/100;
 		a[7]=3*i/10%10;
 		a[8]=3*i%10;

		 
		b[a[0]]++;
		b[a[1]]++;
		b[a[2]]++;
		b[a[3]]++;
		b[a[4]]++;
		b[a[5]]++;
		b[a[6]]++;
		b[a[7]]++;
		b[a[8]]++;
		
		p = b[1]*b[2]*b[3]*b[4]*b[5]*b[6]*b[7]*b[8]*b[9];// 
 		if (p != 0)
 		cout<<i<<' '<<2*i<<' '<<3*i<<endl;
 		
 		memset(b,0,sizeof(b)); 
 	}
 	
 	return 0;
 }

   



 
