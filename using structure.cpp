	//write c++ program using structure
#include<iostream>
using namespace std;
struct complex{
	double real;
	double img;
	
};
int main()
{
	complex c1,c2;
	cout<<"Enter real part of c1:";
	cin>>c1.real;
	cout<<"Enter image part of c1:";
	cin>>c1.img;
	cout<<"Enter real part of c2:";
	cin>>c2.real;
	cout<<"Enter image part of c2:";
	cin>>c2.img;
	
	cout<<c1.real+c2.real<<" + ";
	cout<<c1.img+c2.img<<"i";
	
	return 0;
}