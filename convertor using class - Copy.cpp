#include<iostream>
using namespace std;
class convertor
{
	double cm;
	double m;
	float km;
	double ft;
	double inch;
	public:
	void calculations();
	void getdata(double);
	void putdata(void);
		
};
void convertor::getdata(double c)
{
	cm=c;
}
void convertor::putdata(void)
{
	cout<<"cm to m:"<<m<<endl;
	cout<<"cm to km:"<<km<<endl;
	cout<<"cm to feet:"<<ft<<endl;
	cout<<"cm to inch:"<<inch<<endl;
}
void convertor::calculations()
{
	km=cm/100000;
	m=cm/100;
	ft=cm/30.48;
	inch=cm/2.54;
}
int main()
{
	convertor c;
	c.getdata(10);
	c.calculations();
	c.putdata();
}
