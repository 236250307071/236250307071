//scope resolution operator
#include<iostream>
using namespace std;
int j=23;
int main()
{
	int k=90;
	cout<<k<<endl;						//local variable
	cout<<::j;						//global variable

return 0;}