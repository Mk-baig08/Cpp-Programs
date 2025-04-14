/* Write a recursive function to calculate factorial of
  a non-negative integer 'n'.*/
#include<iostream>
#include<cmath>

using namespace std;

int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else 
	{
		return n*factorial(n-1);
	} 
}

int main()
{
	int num;
	cout<<"\nEnter number: ";
	cin>>num;
	cout<<"\nFactorial of "<<num<<" = "<<factorial(num);
}