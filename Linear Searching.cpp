/*Write a program to search any element in the array*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int num,i,j;
	bool found;
	int list[5]={2,4,6,8,10};
	cout<<"\nEnter the number you want to search: ";
	cin>>num;
	for(i=0;i<5;i++)
	{
		if(list[i] == num)
		{
			found = true;
			j=i;
		}
	}
	if(found == true)
	{
		cout<<"\nThe Number is found at index "<<j;
	}
	else
	{
		cout<<"\nNumber not found in the list!\n";
	}
		
	return 0;
}