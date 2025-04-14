/* Write a recursive function to compute the nth number in the Fibonacci sequence,
where each number is the sum of the two preceding ones.The sequence starts with
F(0) = 0 and F(1) = 1, and subsequent numbers are
defined as:
       F(n) = F(n − 1) + F(n − 2).  */

#include<iostream>
#include<cmath>

using namespace std;

int fibonacci(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2);
	 
}

int main()
{
	int num;
	cout<<"\nEnter the number: ";
	cin>>num;
	cout<<"\nValue in fibonacci sequence at "<<num<<" is "<<fibonacci(num);
}