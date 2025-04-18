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

class shape
{
	public:
		int x1,x2;
		int y1,y2;
		shape()
		{
			x1=6;
			x2=10;
			y1=2;
			y2=4;
		}
		virtual void displayDetails()
		{
			cout<<"\n\nDisplay Function\n";
		    cout<<"--------------------\n";
		}
};

class color
{
	public:
		string clr;
		color()
		{
			clr="Blue";
		}
};

class color_shape:public shape,public color
{
	public:
	    int length;
		int width;
		int Area;
		double Distance;
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
	void displayDetails()
	{
		cout<<"\nArea = "<<calc_area();
		cout<<"\n\nColour:  "<<clr;
		cout<<"\n\nDistance = "<<Dist();
	}
};

int main()
{
	color_shape c(53,31);
	shape *sh;
	sh=&c;
	sh->displayDetails();
	
	return 0;
}