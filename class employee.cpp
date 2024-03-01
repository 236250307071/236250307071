#include<iostream>
using namespace std;
class employee 
{
	char en[20];
	char eno[10];
	long int basic;
	float da;
	float it;
	float net_salary;
	float calculations()
	{
		
		net_salary=((basic+da)-it);
		return net_salary;
	}
	public:
	void getdata(char *,char *,long int,float,float);
	void putdata(void);
};
void employee::getdata(char *a,char *b,long int ba, float d,float i)
{
	strcpy(en,a);
	strcpy(eno,b);
	basic=ba;
	da=d;
	it=i;
	
}
void employee::putdata()
{
	cout<<"employee salary details: "<<endl;
	cout<<"employee no: "<<eno<<endl;
	cout<<"employee name: "<<en<<endl;
	cout<<"employee basic: "<<basic<<endl;
	cout<<"employee da: "<<da<<endl;
	cout<<"employee it: "<<it<<endl;
	cout<<"employee net salary: "<<calculations()<<endl;
}
int main()
{
	employee e1;
	e1.getdata("john Doe","emp07",7000,31000,3000);
	e1.putdata();
	return 0;
}