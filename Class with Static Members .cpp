/* Create a C++ class Duration to represent time in hours and minutes.
• Data Members: int hours, int minutes (private), static int
totalDurations (tracks total objects).
• Requirements:
1. Default constructor: Sets hours and minutes to 0.
2. Parameterized constructor: Takes hours and minutes, simplifies
minutes (e.g., 75 minutes becomes 1 hour, 15 minutes).
3. Private utility function: simplify() to keep minutes 60 (called
in constructors).
4. Static function: showTotalDurations() to print totalDurations.
5. Constant member function: display() to print hours and minutes.
• Question: Implement the class and test it by creating multiple objects,
displaying their simplified durations with display(), and showing the
total number of objects using showTotalDurations(). */

#include<iostream>

using namespace std;

class Duration
{
	private:
		int minutes;
		
//	    Private Member Function
		void simplify()
		{
			if(minutes>59)
			{
				int m1,total_minutes,h1;
				h1=minutes/60;
				hours=hours+h1; // adds hours 
				total_minutes=h1*60;
				m1=minutes-total_minutes;
				minutes=m1;
			}

		}
		
	public:
		int hours;
		static int total_durations;
		
//		Default Constructor
		Duration()
		{
			minutes=0;
			hours=0;
			total_durations++;
		}
		
//		Parameterized Constructor
		Duration(int h,int m)
		{
			hours=h;
			minutes=m;
			total_durations++;
			simplify();
		}
		
		static void showTotalDurations()
		{
			cout<<"\n Total Durations = "<<total_durations;
		}
		
//		Constant Member Function
		void display() const
		{
			cout<<"\n Hours = "<<hours;
			cout<<"\n Minutes = "<<minutes;
		}
		
};

int Duration :: total_durations=0;

int main()
{
	int H,M;
	cout<<"\nEnter hours: ";
	cin>>H;
	cout<<"\nMinutes: ";
	cin>>M;
	Duration t1(H,M);
	cout<<"\n\n Object 1\n";
	cout<<"------------";
	t1.display();
	Duration t2(2,87);
	cout<<"\n\n Object 2\n";
	cout<<"------------";
	t2.display();
	Duration t3(6,50);
	cout<<"\n\n Object 3\n";
	cout<<"------------";
	t3.display();
	Duration t4(3,235);
	cout<<"\n\n Object 4\n";
	cout<<"------------";
	t4.display();
	Duration D;
	cout<<"\n\n";
	D.showTotalDurations();

}