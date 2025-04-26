/* Background: You are organizing a conference and need to manage the seating arrangement. The
number of attendees and seating layout can change dynamically.
Task:
1. Ask the user to input the number of rows and columns for the seating arrangement.
2. Dynamically allocate a 2D array to represent the seating layout.
3. Populate the array with attendee names (or IDs) as they register.
4. Implement the following features:
• Add a new attendee (resize the array if needed).
• Remove an attendee (mark their seat as empty).
• Display the current seating arrangement.
• Find and display the location of a specific attendee.
5. Deallocate the memory after use. */

#include<iostream>
#include<iomanip>
#include<new>
#include<cstring>

using namespace std;

int main()
{
	cout<<"\n\t\t------------------------------------------\n";
	cout<<"\n\t\t| Welcome to Seating Arrangement Program |\n\n";
	cout<<"\t\t------------------------------------------\n";
	int i,j,rows,columns;
	
//	1) Input rows and columns
	cout<<"\nEnter no. of rows: ";
	cin>>rows;
	cout<<"\nEnter no. of columns: ";
	cin>>columns;
	
//	2) Dynamic Allocation of 2D array (rows&cols)
	string **seating;
	seating = new string *[rows];
	for(i=0;i<rows;i++)
	{
		seating[i]=new string [columns];
	}
	
	cout<<"\n\n"<<setw(35)<<"Seating Arrangement\n";
	cout<<setw(35)<<"--------------------\n";
	for(i=0;i<rows;i++)
	{
		cout<<"\t"<<setw(10)<<"Row "<<i+1<<": ";
		for(j=0;j<columns;j++)
		{
			cout<<"_"<<"  ";
		}
		cout<<endl;
	}
	
//	3) Populate array
    for(i=0;i<rows;i++)
	{
		cin.ignore();
		for(j=0;j<columns;j++)
		{
			cout<<"\nEnter name of attendee "<<"("<<i+1<<","<<j<<")"<<": ";
			getline(cin,seating[i][j]);
		}
		cout<<endl;
	}
	
	 // Displaying seating arrangement of attendees
	 cout<<"\n\n\tSeating Arrangement\n\n";
	  for(i=0;i<rows;i++)
	{
		cout<<setw(10)<<"Row "<<i+1<<":\t";
		for(j=0;j<columns;j++)
		{
			cout<<seating[i][j]<<"\t";
		}
		cout<<endl;
	}
//	Operations:

//      Add attendee
	char ch1;
	cout<<"\n\nDo you want to add attendee? [y/n]: ";
	cin>>ch1;
	cin.ignore();
	if(ch1=='y')
	{
		int size;
		cout<<"\nHow many attendees do you want to add:  ";
		cin>>size;
		// Declaring another 2D Pointer for resizing array
		string **new_seating;
		new_seating= new string *[rows];
		for(i=0;i<rows;i++)
		{
			new_seating[i]=new string[size];
			
		}
		// Storing columns into new 2D
		for(i=0;i<rows;i++)
		{
			for(j=0;j<columns;j++)
			{
				new_seating[i][j]=seating[i][j];
			}
		}
//		 Adding sizes
		int new_size;
		new_size=columns+size;
		// Enter new attendees
		for(i=0;i<rows;i++)
	    {
		    cin.ignore();
		    for(j=columns;j<new_size;j++)
		    {
			    cout<<"\nEnter name of attendee "<<"("<<i+1<<","<<j<<")"<<": ";
			    getline(cin,new_seating[i][j]);
		    }
		    cout<<endl;
	    }
	    // Displaying the updated arrangement
	    for(i=0;i<rows;i++)
	    {
	    	cout<<setw(10)<<"Row "<<i+1<<":\t";
	    	for(j=0;j<new_size;j++)
	    	{
	    		cout<<new_seating[i][j]<<"\t";
			}
			
			cout<<endl;
		}
		
		//De-allocation of previous memories
		for(i=0;i<rows;i++)
		{
			delete []seating[i];
		}
		delete []seating;
		seating=new_seating;
		columns=new_size;
	}
	else
	{
		cout<<"\nNo attendee added!....";
	}
	
//	Removing an attendee
char ch2;
cout<<"\n\nDo you want to remove an attendee? [y/n]: ";
cin>>ch2;
cin.ignore();
if (ch2 == 'y') {
    string nameToRemove;
    cout<<"\nEnter the name of attendee to remove: ";
    getline(cin, nameToRemove);
    
    bool found = false;
    for(i=0; i<rows; i++) {
        for(j=0; j<columns; j++) {
            if(seating[i][j] == nameToRemove) {
                seating[i][j] = "Empty";
                found = true;
                cout<<"\nAttendee removed successfully from ("<<i+1<<","<<j<<").\n";
                break;
            }
        }
    }
    if(!found) {
        cout<<"\nAttendee not found!\n";
    }
}

// Display the updated seating
cout<<"\n\n\tUpdated Seating Arrangement\n\n";
for(i=0; i<rows; i++) {
    cout<<setw(10)<<"Row "<<i+1<<":\t";
    for(j=0; j<columns; j++) {
        cout<<seating[i][j]<<"\t";
    }
    cout<<endl;
}

// Finding an attendee
char ch3;
cout<<"\n\nDo you want to find an attendee? [y/n]: ";
cin>>ch3;
cin.ignore();
if (ch3 == 'y') {
    string searchName;
    cout<<"\nEnter the name of attendee to find: ";
    getline(cin, searchName);
    
    bool found = false;
    for(i=0; i<rows; i++) {
        for(j=0; j<columns; j++) {
            if(seating[i][j] == searchName) {
                cout<<"\nAttendee "<<searchName<<" found at ("<<i+1<<","<<j<<").\n";
                found = true;
                break;
            }
        }
    }
    if(!found) {
        cout<<"\nAttendee not found!\n";
    }
}

// De-allocate final memory
for(i=0; i<rows; i++) {
    delete [] seating[i];
}
delete [] seating;

cout<<"\n\nMemory deallocated successfully!\n";
cout<<"\n\n\t\tThank you for using the Seating Arrangement Program!\n";

return 0;

	
}