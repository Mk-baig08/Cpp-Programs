/* Problem: Create a Number guessing game where the user has to guess a secret number. After every guess
the program tells the user whether their number was too large or too small. At the end the number of tries
needed should be printed. It counts only as one try if they input the same nummber multiple times consecutively.*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int secret_num = 2;
	int i,num,life,previous_num;
	life = 5;
	previous_num = num;
	cout<<"You have total of 5 lifes and 10 tries to guess the number!\n";
	for(i=0;i<10;i++)
	{
		cout<<"\nEnter a number: ";
	    cin>>num;
	    if(num == previous_num)
	    {
	    	cout<<"\nYou already used this number as guess! You are stil left with "<<life<<" lifes\n";
	    	continue;
		}
		previous_num = num;
		if(num == secret_num)
		{
			cout<<"\nWelldone! you guessed the number\n";
			break;
		}
		else if(num > secret_num)
		{
			cout<<"\nNumber is too large!";
			life --;
			cout<<"\n\nYou are left with "<<life<<" lifes\n";
		}
		else if(num < secret_num)
		{
			cout<<"\nNumber is too small!";
			life --;
			cout<<"\n\nYou are left with "<<life<<" lifes\n";
		}
		if(life == 0)
		{
			cout<<"\n\nYou lost all lives!\n";
			cout<<"\nBetter Luck next time!\n";
			break;
		}
	}
}
