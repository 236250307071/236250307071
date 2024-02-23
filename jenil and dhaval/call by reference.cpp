#include<iostream>
using namespace std;
void swap(int&a,int&b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
int main()
{
	int no1,no2;
	cout<<"Enter no1:";
	cin>>no1;
	cout<<"Enter no2:";
	cin>>no2;
	cout<<"before swaping"<<endl;
	cout<<no1<<endl<<no2<<endl;
	swap(no1,no2);
	cout<<"after swaping:"<<endl;
	cout<<no1<<endl<<no2<<endl;
	return 0;
	
}