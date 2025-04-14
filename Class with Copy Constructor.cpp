// Create a C++ class Book to represent a book’s page count.
/* • Data Member: int pages (public for simplicity).
• Requirements:
1. Default constructor: Sets pages to 100.
2. Parameterized constructor: Takes an integer to initialize pages
(minimum 1).
3. Copy constructor: Creates a copy of another Book object.
4. Constant member function: showPages() to print pages.
• Question: Implement the class and test it by creating an object with
the parameterized constructor, copying it using the copy constructor,
and displaying the page counts using showPages(). */

#include<iostream>

using namespace std;

class Book
{
	public:
		int pages;
		
//		Default Constructor
		Book()
		{
			pages=100;
		}
		
//		Paramterized Constructor
        Book(int p)
        {
        	pages=p;
		}
		
//		Copy Constructor
		Book(Book &B)
		{
			pages=B.pages;
		}
		
//		Constant Member Function
		void showpages() const
		{
			cout<<"\n\nPages = "<<pages;
		}
		
};

int main()
{
	Book b(250);
	b.showpages();
}