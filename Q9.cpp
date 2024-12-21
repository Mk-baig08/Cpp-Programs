/* (Program) a. Your professor has asked you to write a C++ program that determines grades for 
five students at the end of the semester. For each student, identified by an integer number, four 
exam grades must be kept, and two final grade averages must be computed. The first grade 
average is simply the average of all four grades. The second grade average is computed by 
weighting the four grades as follows: The first grade gets a weight of 0.2, the second grade gets 
a weight of 0.3, the third grade gets a weight of 0.3, and the fourth grade gets a weight of 0.2. 
That is, the final grade is computed as follows:
0.2*grade1 0.3*grade2 0.3*grade3 0.2*grade4. 
 
Using this information, construct a 5-by-6 two-dimensional array, in which the first column is 
used for the student number, the next four columns for the grades, and the last two columns 
for the computed final grades. The program’s output should be a display of the data in the 
completed array
*/

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	double avg1,avg2;
	int i,j;
	double grades[5][6]={{1,100,100,100,100},{2,100,0,100,0},{3,82,94,73,86},{4,64,74,84,94},{5,94,84,74,64}};
	cout<<"*----- Original Array -----*\n\n";
	for(i=0;i<5;i++)
	{	
		for(j=1;j<5;j++)
		{
			cout<<grades[i][j]<<"  ";
		}
		cout<<"\n\n";
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			avg1=(grades[i][1]+grades[i][2]+grades[i][3]+grades[i][4])/4;
			grades[i][5]=avg1;
			avg2=(grades[i][1]*0.2)+(grades[i][2]*0.3)+(grades[i][3]*0.2)+(grades[i][4]*0.2);
			grades[i][6]=avg2;
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<"\nAvg 1 of student "<<i+1<<": "<<grades[i][5]<<"\n";
	}
	cout<<"\n---------------------------\n";
	for(j=0;j<5;j++)
	{
		cout<<"\nAvg 2 of student "<<j+1<<": "<<grades[j][6]<<"\n\n";
	}
	cout<<"            \n    *--------------------------- FINAL RESULT --------------------------------*\n\n";
	cout<<"*----------------------------------------------------------------------------------------------------*\n\n";
	cout<<"  Student: "<<setw(15)<<"Grade1"<<setw(15)<<"Grade2"<<setw(15)<<"Grade3"<<setw(15)<<"Grade4"<<setw(15)
	<<"Avg1"<<setw(15)<<"Avg2\n";
	cout<<"  --------"<<setw(17)<<"-------"<<setw(15)<<"-------"<<setw(15)<<"-------"<<setw(15)<<"-------"<<setw(15)<<
	"-----"<<setw(15)<<"-----\n";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<"    "<<i+1<<setw(18);
		for(j=1;j<=4;j++)
		{
			cout<<grades[i][j]<<setw(15);
		}
		cout<<fixed<<setprecision(2)<<setw(17)<<grades[i][5];
		cout<<fixed<<setprecision(2)<<setw(14)<<grades[i][6];
		cout<<"\n";
	}
	cout<<"\n*----------------------------------------------------------------------------------------------------*\n";
}