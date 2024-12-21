#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	char i;
	char start_ch,stop_ch;
	cout<<"Enter a single starting character: ";
	cin>>start_ch;
	cout<<"\nEnter a single stopping character (must be after starting character): ";
	cin>>stop_ch;
	while(stop_ch<=start_ch)
	{
	    cout<<"\nInvalid input!......Please enter a valid stopping character: ";
		cin>>stop_ch;
    }
    cout<<"\nCharacters:\t Decimal:\t Octal:\t   Hexadecimal:\n";
    cout<<"--------------------------------------------------------";
	for(i=start_ch;i<=stop_ch;i++)
	{
		cout<<"\n"<<"  "<<i<<setw(18)<<dec<<int(i)<<setw(17)<<oct<<int(i)<<setw(12)<<hex<<int(i)<<"\n";
	}
}