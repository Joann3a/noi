#include <iostream>
using namespace std;

int main()
{
	int n, na, nb, i, j, x, y;
	int a_win,b_win;
	
	cin >> n >> na >> nb;
	int a[na];
	int b[nb];
	
	for (i=0;i<na;i++) cin >> a[i];
	for (i=0;i<nb;i++) cin >> b[i];

	a_win=0;
	b_win=0;
	for (i=0;i<n;i++)
	{
		x=a[i%na];
		y=b[i%nb];
		if(x==0 && y==2) a_win++;
		if(x==0 && y==5) b_win++;
		if(x==2 && y==0) b_win++;
		if(x==2 && y==5) a_win++;
		if(x==5 && y==0) a_win++;
		if(x==5 && y==2) b_win++;
	} 
	
	if(a_win>b_win)
		cout << "A";
	else if (a_win<b_win) 
		cout << "B";
	else
		cout << "draw";
	
	return 0;		
}
