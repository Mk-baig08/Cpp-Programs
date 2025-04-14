/* Find power of a n number recursively. */

#include<iostream>
#include<cmath>

using namespace std;

int power(int x,int y)
{
	if(y==0)
	{
		return 1;
	}
	else 
	{
		return x*power(x,y-1);
	} 
}

int main()
{
	int num,p;
	cout<<"\nEnter number: ";
	cin>>num;
	cout<<"\nEnter Power: ";
	cin>>p;
	cout<<"\nAnswer"<<" = "<<power(num,p);
}