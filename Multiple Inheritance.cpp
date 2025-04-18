/* Multiple Inheritance Task:
Create a C++ program to demonstrate multiple inheritance by designing
a ColoredShape class that inherits publicly from both a Shape class and
a Color class. The program should calculate the area of a rectangular
shape (length * width), display its color (e.g., “Blue”), and compute
the distance from a reference point to a given point using
distance = sqrt (x2 − x1)2 + (y2 − y1)2 .
Implement a virtual function displayDetails() to show area, color, and
distance in the main() function, ensuring proper access control. */

#include<iostream>
#include<cmath>

using namespace std;

// Parent class 1
class shape
{
	public:
		int x1,x2;
		int y1,y2;
		
//		Default Constructor
		shape()
		{
			x1=6;
			x2=10;
			y1=2;
			y2=4;
		}
		
//		Virtual Function
		virtual void displayDetails()
		{
			cout<<"\n\nDisplay Function\n";
		    cout<<"--------------------\n";
		}
};

// Parent class 2
class color
{
	public:
		string clr;
		
//		Default Constructor
		color()
		{
			clr="Blue";
		}
};

//  Multiple Inheritance
class color_shape:public shape,public color
{
	public:
	    int length;
		int width;
		int Area;
		double Distance;
		
//		Parameterized Constructor
		color_shape(int l,int w)
		{
			length=l;
			width=w;
		}
	double Dist()
	{
		return Distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2)); 
	}
	int calc_area()
	{
		return Area=length*width;
	}
	
//	 Virtual Function (Re-defined & Over-ridden)
	void displayDetails()
	{
		cout<<"\nArea = "<<calc_area();
		cout<<"\n\nColour:  "<<clr;
		cout<<"\n\nDistance = "<<Dist();
	}
};

int main()
{
	
//	Parametrized Constructor is called
	color_shape c(53,31);
	
//	Declaring pointer of parent class
	shape *sh; 
	
//	Storing address of instance/object of child class
	sh=&c; 
//	Function Calling using pointer
	sh->displayDetails();
	
	return 0;
}