#include<iostream>
using namespace std;
class array_class
{
	int a[10];
	public:
		void getdata(void);
		void putdata(void);
		
};
void array_class::getdata()
{
	int i;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
		cout<<endl;
	}
}
void array_class::putdata()
{
	int i;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
		
	}
}
int main()
{
	array_class a;
	a.getdata();
	a.putdata();
	return 0;
}