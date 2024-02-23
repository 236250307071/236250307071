#include<iostream>
using namespace std;
inline  float mul(float a,float b)
{
	return a*b;
}
int main()
{
	float a,b,m;
	cout<<"enter two no:"<<endl;
	cin>>a>>b;
	m=mul(a,b);
	cout<<m;
	return 0;	
}