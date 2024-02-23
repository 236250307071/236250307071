#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i=20,j=3;
	float k=45.677910;
	cout<<setw(5)<<i<<endl;
	cout<<setw(4)<<setfill('*')<<j<<endl;
	cout<<setw(9)<<setprecision(4)<<setfill('*')<<k;
	return 0;
	
}