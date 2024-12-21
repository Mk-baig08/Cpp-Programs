#include<iostream>
#include<conio.h>

using namespace std;

int digitsum(int n)
{
	int sum=0;
	while(n>0)
	{
		int last_digit = n%10;
		n/=10;
		sum+=last_digit;
	}
	return sum;
}

int main()
{
	int num;
	cout<<"Enter number: ";
	cin>>num;
	cout<<"\nSum of its digits = "<<digitsum(num);
}