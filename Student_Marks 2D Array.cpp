/* Declare a 2dimensional array “marks” having row index as a student and column index as 
subjects. Suppose total students are 40 and subjects are 5. Do the following tasks for this 
2dimensional array:
1) Input data from the keyboard for the given 2dimensional array.
2) Display data stored in 2dimensional array.
3) Find the average of each student in 5 subjects and store the average of each student 
in a single dimensional array.
4) Find the student with the highest average and lowest average.
5) Which student got maximum marks in all subjects?
6) Which student got the lowest marks in subject 4.
7) How many students fail in subject 2? (marks <50 is F grade)
8) How many students got A Grade in subject 4? (marks >=80 is A grade) */

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	const int students=40,subj=5;
	int sum;
	int marks[students][subj];
	int i,j,count1=0,count2=0;
	float avg,average[5];
	for(i=0;i<students;i++) //1)input data in 2D marks array.
	{
		sum=0;
		cout<<"\nFor Student "<<i+1<<":\n";
		for(j=0;j<subj;j++)
		{
			cout<<"\nEnter marks of subject "<<j+1<<": ";
			cin>>marks[i][j];
			sum+=marks[i][j];
		}
		average[i]=sum/5.0;     //2)Finding Average of each student in 5 subjects.
		cout<<"-----------------------------";
		cout<<"\nAverage of student "<<i+1<<": "<<average[i];
		cout<<"\n---------------------------\n";
	}
	cout<<"\nAverage Array: [ "; //Storing the averages in a 1D array.
	for(i=0;i<students;i++)   
	{
		cout<<average[i]<<"  ";
	}
	cout<<"]\n";
	
	// 3)Displaying all stored data in 2D Array.
	cout<<"\n<-----------------------------------------FINAL 2D MARKS ARRAY------------------------------------------->";  
	cout<<"\n\n*-------------------------------------------------------------------------------------------------------*\n\n";
	cout<<"Student: "<<setw(15)<<"Subject1"<<setw(15)<<"Subject 2"<<setw(15)<<"Subject 3"<<setw(18)<<"Subject 4"<<setw(18)
	<<"Subject 5"<<setw(15)<<"Average\n";
	cout<<"---------------------------------------------------------------------------------------------------------";
	for(i=0;i<students;i++)
	{
		cout<<"\n  "<<i+1<<setw(15);
		for(j=0;j<subj;j++)
		{
			cout<<marks[i][j]<<setw(17);
		}
		cout<<setw(17)<<fixed<<setprecision(2)<<average[i]<<" ";
		cout<<"\n";
	}
	cout<<"\n*-------------------------------------------------------------------------------------------------------*\n";
	int lowest=INT_MAX,highest=INT_MIN;  //4)Finding highest & lowest avg student.
	for(i=0;i<students;i++)
	{
		if(average[i]>highest)
		{
			highest=average[i];
			count1=i+1;
		}
		if(average[i]<lowest)
		{
			lowest=average[i];
			count2=i+1;
		}
	}
	cout<<"\n Student '"<<count1<<"' has the Highest Average.\n";
	cout<<"\n Student '"<<count2<<"' has the Lowest Average.\n";
	cout<<"-------------------------------------------------\n";
	int comp,count_max=0,max_marks=0;   //5)Finding student with maximum marks in all subjects.
	for(i=0;i<students;i++)
	{
		comp=0;
		for(j=0;j<subj;j++)
		{
			comp+=marks[i][j];
		}
		if(comp>max_marks)
		{
			max_marks=comp;
			count_max=i;
		}
	}
	cout<<"\n Student '"<<count_max+1<<"' got maximum marks in all subjects.\n";
	cout<<"-----------------------------------------------------------------\n";
	int min_marks=0; //6)Finding student having lowest marks in subj4
	for(i=0;i<students;i++)
	{
		if(marks[i][3]<marks[0][3])
		{
			min_marks=i;
		}
	}
	cout<<"\n Student '"<<min_marks+1<<"' got lowest marks in subject 4.\n";
	cout<<"------------------------------------------------------------\n";
	int count_f=0; 
	char gradef;   //7)Finding failed students in subj 2.
	for(i=0;i<students;i++)
	{
		if(marks[i][1]<50)
		{
			count_f++;
			gradef='F';
		}
	}
	cout<<"\n "<<count_f<<" Students got failed in subject 2 with grade '"<<gradef<<"'\n";
	int count_p=0;  //8)Finding students with A grade in subj 4.
	char gradep;      
	for(i=0;i<students;i++)
	{
		if(marks[i][3]>=80)
		{
			count_p++;
			gradep='A';
		}
	}
	cout<<"\n "<<count_p<<" Students got '"<<gradep<<"' grade in Subject 4.\n";
}
