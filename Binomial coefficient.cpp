#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int n)
{
	int i;
	int fact=1;
	for(i=n;i>=1;i--)
	{
		fact*=i;
	}
	
	return fact;
}

int nCr(int n,int r)
{
	int fact_n,fact_r,fact_nmr;
	fact_n=factorial(n);
	fact_r=factorial(r);
	fact_nmr=factorial(n-r);
	
	return fact_n/(fact_r*fact_nmr);
}

int main()
{
	int nth,rth;
	cout<<"\nEnter value of n: ";
	cin>>nth;
	cout<<"\nEnter value of r: ";
	cin>>rth;
	cout<<"\nBinomial Coefficient (nCr) = "<<nCr(nth,rth);
	
	return 0;
}