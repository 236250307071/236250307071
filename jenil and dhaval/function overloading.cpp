#include<iostream>
#include<string.h>
using namespace std;
int max(int a,int b,int c)
{
	if((a>b)&&(a>c))
	{
		return a;
	}
	else if((b>a)&&(b>c))
	{
		return b;
	}
	else
	{
		return c;
	}
}
char max(char a,char b,char c)
{ 
	
	if((a>b)&&(a>c))
	{
		return a;
	}
	else if((b>a)&&(b>c))
	{
		return b;
	}
	else
	{
		return c;
	}
}
int main()
{
	int m,a,b,c;
	char str1,str2,str3;
	cout<<"enter three no:"<<endl;
	cin>>a>>b>>c;
	cout<<"enter three string:"<<endl;
	cin>>str1>>str2>>str3;
	cout<<max(a,b,c)<<endl;
	cout<<max(str1,str2,str3);
	return 0;
}
