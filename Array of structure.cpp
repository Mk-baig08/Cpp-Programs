/*(Program): Declare an array of structure (Employee),having fields "name, id No, salary
    and gender." Then:
	1)Find the male employ with highest salary and display its record.
	2)Find the female employ with highest salary and display its record."*/

#include<iostream>
#include<string>
#include<stdlib.h>
#include<cctype>
#include<iomanip>
#include<climits>

using namespace std;

struct Employee
{
	char name[50];
	char gender;
	char id[30];
	float salary;
};

int main()
{
	const int size=5;
	Employee record[size];
	int i,largest;
	int smallest;
	int loc1,loc2;
	for(i=0;i<size;i++)
	{
		
		cout<<"\nEnter Name of Employee: ";
		gets(record[i].name);
		cout<<"\nEnter gender of Employee [M/F]: ";
		cin>>record[i].gender;
		cin.ignore();
		cout<<"\nEnter ID No. of Employee: ";
		gets(record[i].id);
		cout<<"\nEnter salary of Employee: ";
		cin>>record[i].salary;
		cin.ignore();
		cout<<"\n-------------------------------------\n";
	}
	largest=INT_MIN;
	for(i=0;i<size;i++)
	{
		if(record[i].salary>largest && record[i].gender == 'M')
		{
			largest=record[i].salary;
			loc1=i;
		}
	}
    cout<<"\n------------------* Record of Employee With Highest Salary *--------------------\n";
	cout<<"\nName\t\tGender\t\tId No.\t\tSalary\n";
	cout<<"\n"<<record[loc1].name<<setw(10)<<record[loc1].gender<<"\t\t"<<record[loc1].id<<"\t\t"<<record[loc1].salary<<"\n\n";	
	
	smallest=INT_MAX;
	for(i=0;i<size;i++)
	{
		if(record[i].salary<smallest && record[i].gender == 'F')
		{
			smallest=record[i].salary;
			loc2=i;
		}
	}
	cout<<"\n\n------------------* Record of Employee With Lowest Salary *--------------------\n\n";
	cout<<"\nName\t\tGender\t\tId No.\t\tSalary\n";
	cout<<"\n"<<record[loc2].name<<setw(10)<<record[loc2].gender<<"\t\t"<<record[loc2].id<<"\t\t"<<record[loc2].salary<<"\n";
	
	return 0;
}