#include<iostream>
using namespace std;
inline double multiplication(double a,double b)
{
	return a*b;
}
int main()
{
	double a,b;
	cout<<"Enter no1: ";
	cin>>a;
	cout<<"Enter no2:";
	cin>>b;
	cout<<multiplication(a,b);
	
	return 0;
}
