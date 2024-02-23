#include<iostream>
using namespace std;
double AOC(double r,double PI=3.14)
{
	return PI*r*r;
}
int main()
{
	double r,a;
	cout<<"enter radius:";
	cin>>r;
	a=AOC(r);
	cout<<a;
	return 0;
	
}