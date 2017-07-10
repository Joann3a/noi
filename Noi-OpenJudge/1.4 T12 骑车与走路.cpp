#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int dist;
	
	cin >> dist;
	double bike_time, walk_time;
	
	bike_time = dist/3.0+(27+23);
	walk_time = dist/1.2;
	
	if (bike_time<walk_time)
	   cout << "Bike";
	else if (bike_time>walk_time)
	   cout << "Walk";
	else
	   cout << "All";
	
	return 0;
}
