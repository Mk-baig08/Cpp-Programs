#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int n)
{
	int fact=1;
	for(int i=n;i>=1;i--)
	{
		fact*=i;
	}
	return fact;
}

int main()
{
	cout<<"\nFactorial = "<<factorial(3)<<endl;
	cout<<"\nFactorial = "<<factorial(5)<<endl;
	cout<<"\nFactorial = "<<factorial(6)<<endl;
	cout<<"\nFactorial = "<<factorial(7)<<endl;
	cout<<"\nFactorial = "<<factorial(10)<<endl;
}