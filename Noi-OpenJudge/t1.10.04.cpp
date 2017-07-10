#include <iostream>
#include <algorithm>
using namespace std;
struct mark
{
	int id,tot,chi,math,eng;
}stu[305];

bool cmp(score a,score b)
{
	if(a.tot!=b.tot)
		return a.tot>b.tot;
	else if(a chi!=b.chi)
		return a.chi>b.chi;
	else
		return a.id<b.id; 
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		stu[i],id=i;
		cin>>stu[i].chi+stu[i]math+stu[i].eng;
		stu[i].tot=stu.chi+stu[i].math+stu[i].eng;
	}
	sort(stu+1,stu+1+n,cmp);
	
	for(int i=1;i<=5;i++)
		cout<<stu[i].id<<' '<<stu[i].tot<<endl;
	return 0;
}
