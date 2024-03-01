	//write c++ program college_info(like a :college_name,colege_code,colege_intact,college_number_of_department)

#include<iostream>
using namespace std;
struct college_info{
	char college_name[100];
	int college_code;
	int college_intact;
	int college_no_of_department;
};
int main()
{
	college_info cl[10];
	int i,j;
	fflush(stdin);
	for(i=0;i<2;i++)
	{
	cout<<i<<endl;
	cout<<"\nEnter college name:";
	cin.getline(cl[i].college_name,100);
	cout<<"\nEnter college cod:";
	cin>>cl[i].college_code;
	cout<<"\nEnter collge intact:";
	cin>>cl[i].college_intact;
	cout<<"\nEnter college number of department:";
	cin>>cl[i].college_no_of_department;
}
for(j=0;j<5;j++)
{

	cout<<"\ncollege name:"<<cl[i].college_name;
	cout<<"\ncollege cod:"<<cl[i].college_code;
	cout<<"\ncollge intact:"<<cl[i].college_intact;
	cout<<"\ncollege number of department:"<<cl[i].college_no_of_department;
}
	return 0;
}