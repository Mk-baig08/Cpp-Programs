#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int i,j;
	float voltages,sum,avg;
	float total_avg,total_sum;
	for(i=1;i<=5;i++)
	{
		cout<<"-----------------------------------";
		cout<<"\n| Voltages of Generator "<<i<<":"<<"\t  |"<<"\n";
		cout<<"-----------------------------------";
		sum = 0;
		total_avg=0;
		total_sum=0;
		for(j=1;j<=3;j++)
		{
			cout<<"\n";
			cout<<"| Test result "<<j<<": ";cin>>voltages;cout<<"|";
			sum+=voltages;
			avg=sum/3;
		}

		cout<<"\n| Average of Generator "<<i<<" = "<<fixed<<setprecision(2)<<avg<<"\n";
		cout<<"----";
		total_sum += avg;
		total_avg = total_sum/5;
	}
	cout<<"\n*------------------------------------------------------*";
	cout<<"\nOverall Average of voltages of all Generators = "<<total_avg<<"\n";
	cout<<"*-------------------------------------------------------*\n";
	
	return 0;
}