/* Single Inheritance Task:
Design a C++ program to demonstrate single inheritance by creating 
a Rectangle class that inherits publicly from a Shape base class. The
program should calculate the area (length * width) and perimeter (2*(length + width))
of a rectangle and include a distance calculation from a reference point to a given point
using the formula:
distance = sqrt (x2 - x1)^2 + (y2 - y1)^2.
Use appropriate access specifiers, ensuring private members are not inherited,
and implement a virtual function displayDetails() to show area,perimeter, and distance
in the main() function. */

#include<iostream>
#include<cmath>

using namespace std;

// Parent class
class shape
{
	public:
		int x1,x2;
		int y1,y2;
		shape()
		{
			x1=3;
			x2=5;
			y1=2;
			y2=4;
		}
		
//	  Virtual Function
	virtual void displayDetails()
	{
		cout<<"\n\nDisplay Function\n";
		cout<<"--------------------\n";
		cout<<"\n x1 is "<<x1;
		cout<<"\n x2 is "<<x2;
		cout<<"\n y1 is "<<y1;
		cout<<"\n y2 is "<<y2;
	}
};

//  Single inheritance
class rectangle:public shape
{
	public:
		int length;
		int width;
		int Area;
		int perimeter;
		double Distance;
		
//		Parameterized Constructor
		rectangle(int l,int w)
		{
			width=w;
			length=l;
		}
	double Dist()
	{
		return Distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2)); 
	}
	int calc_area()
	{
		return Area=length*width;
	}
	int calc_peri()
	{
	    return perimeter=2*(length+width);
	}
	
//	Virtual Function (Re-defined & Over-ridden)
	void displayDetails()
	{
		cout<<"\nArea = "<<calc_area();
		cout<<"\n\nPerimeter = "<<calc_peri();
		cout<<"\n\nDistance = "<<Dist();
	}
};

int main()
{
	
//	Parameterized Constructor
	rectangle rect(23,3);
	
//	Declaring pointer of parent class
	shape *sh;
	
//	Storing address of object of child class
	sh=&rect;
	
//	Function calling using pointer
	sh->displayDetails();
	
	return 0;
}