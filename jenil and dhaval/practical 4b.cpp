// array sorting

#include<iostream>
using namespace std;
int main()
{	
	int a[10];
	int i,j,k,temp;
	cout<<"enter 10 elements:\n";
	for(i=0;i<10;i++)
		{
			cout<<"a["<<i<<"]=" ;
			cin>>a[i];
		}
	for(i=0;i<9;i++)
	{
	for(j=0;j<9;j++)
		{
		if(a[j]<a[j+1])
		   {
		 	  	temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<endl;
	cout<<"sorted array in descending order:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
	
}