// Design a C++ class Counter to represent a simple counter.
/* • Data Member: int count (non-negative, public for simplicity).
• Requirements:
1. Default constructor: Initializes count to 0.
2. Parameterized constructor: Takes an integer parameter to initialize count (set to 0 if negative).
3. Constant member function: display() to print the value of count.
• Question: Implement the class and test it by creating two objects:
one with the default constructor and one with the parameterized constructor.
Display their counts using display(). */

#include<iostream>

using namespace std;

class Counter
{
	public:
		int count;
		
//		Default constructor
		Counter()
		{
			count=0;
		}
		
//		Parameterized constructor
		Counter(int c)
		{
			if(c<0)
			{
				count=0;
			}
			else
			{
				count=c;
			}
		}
		
//		Constant Member function
		void display() const
		{
			cout<<"\nValue of Count = "<<count;
		}		
};

int main()
{
	Counter c1;
	c1.display();   // Default constructor called
	Counter c2(5); // Parameterized constructor called
	c2.display();
}