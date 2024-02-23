#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double km;
	cout<<"CONVERTER:"<<endl;
	cout<<"enter km:";
	cin>>km;
	cout<<fixed;
	cout<<setprecision(1)<<endl;
	cout<<setw(12)<<"UNIT"<<setw(12)<<"VALUE"<<endl;
	cout<<setw(12)<<"centimeter:"<<setw(12)<<km*100000<<endl;
	cout<<setw(12)<<"meter:"<<setw(12)<<km*1000<<endl;
	cout<<setw(12)<<"inch:"<<setw(12)<<km*39370.079<<endl;
	cout<<setw(12)<<"feet:"<<setw(12)<<km*3280.84<<endl;
	return 0;
	
}