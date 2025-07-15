#include<iostream>
#include<conio.h>

using namespace std;

double calc(int,int,char);
double calc(int n1,int n2,char a_op)
{
	double answer;
	switch(a_op)
	{
		case '+': answer = n1+n2;break;
		case '-': answer = n1-n2;break;
		case '*': answer = n1*n2;break;
		case '%': answer = n1%n2;break;
		case '/': answer = n1/n2;break;
	}
	
	return answer;
}

int main()
{
	int a,b,ans;
	char op;
	cout<<"\nEnter 1st number: ";
	cin>>a;
	cout<<"\nEnter 2nd number: ";
	cin>>b;
	cout<<"\nEnter operator [+, -, *, %, /]: ";
	cin>>op;
	ans = calc(a,b,op);
	cout<<"\nAnswer = "<<ans;
}
