/* (Program). Make a menu driven program using Array of structures. 
    You can use structure of your own choice. */
     
#include<iostream>
#include<iomanip>
#include<fstream>
#include<conio.h>
#include<cstring>
#include<stdio.h>
#include<cstdlib>
#include<windows.h>

using namespace std;

/* Creating a record of cricket teams(ct) with its fields: names, ranking, matches (played)
   won and lost. */
struct ct
{
	char name[50];
	char ranking[10];
	double matches;
	double ev_won;
};

//Function prototypes
void gotoxy(short,short); //This function is used for specifying location of cursor.
void add(ct [],int,int&);
void display(ct[],int,int&);
void search(ct[],int,int&);
void sort(ct[],int,int&);
void del(ct[],int,int&);
void modify(ct[],int,int&);

int main()
{
	const int size=50;
	ct cricket[size];
	char option;
	int count=0;
	while(1)
	{
		system("cls");
		cout<<"\n\t\t--------------------------------------\n";
	cout<<"\t\t"<<"| Welcome To The Record Menu Program |";
	cout<<"\n\t\t--------------------------------------\n\n";
	cout<<"\tSelect any of the Options given below:\n";
	cout<<"\t--------------------------------------\n\n";
	cout<<"\t(A) Add Record\n\n";
	cout<<"\t(O) Sort All Records\n\n";
	cout<<"\t(S) Search Record\n\n";
	cout<<"\t(D) Display Record\n\n";
	cout<<"\t(Z) Delete Record\n\n";
	cout<<"\t(M) Modify Record\n\n";
	cout<<"\t(E) Exit Program\n\n";
	cout<<"\nEnter option: _ ";
	gotoxy(14,23);
	option=getche(); //reads single-character from keyboard and displays it.

	switch(option)
	{
		case 'A':
		case 'a': add(cricket,size,count);break;
		case 'D':
		case 'd': display(cricket,size,count);break;
		case 'S':
		case 's': search(cricket,size,count);break;
		case 'O':
		case 'o': sort(cricket,size,count);break;
		case 'Z':
		case 'z': del(cricket,size,count);break;
		case 'M':
		case 'm': modify(cricket,size,count);break;
		case 'E':
		case 'e': cout<<"\n\nExiting Program....!";
		          exit(0);break;
		default:
		{
			cout<<"\n\nPlease select valid option!";
		}
	}
	
    }
    
	return 0;
}



void add(ct teams[],int size,int& count)
{
	system("cls");
	int i;
	int limit;
	cout<<"\n\t------*ADD RECORD*------\n";
	cout<<"\t=========================\n\n";
	cout<<"\nHow many records do you want to add?  ";
	cin>>limit;
	cin.ignore();
	if(limit<size)
	{
		for(i=0;i<limit;i++)
	    {
	    	cout<<"\nRecord "<<i+1;
	        cout<<"\n\nEnter the team name: ";
	        cin.getline(teams[count].name,50);
	        cin.ignore();
	        cout<<"\nEnter the team ranking: ";
	        cin.getline(teams[count].ranking,10);
	        cin.ignore();
	        cout<<"\nEnter matches played: ";
	        cin>>teams[count].matches;
	        cin.ignore();
	        cout<<"\nEnter no. of ICC events won: ";
	        cin>>teams[count].ev_won;
	        cin.ignore();
	        cout<<"\n--------------------------------\n";
	        count++;
	    }
	}
	else
	{
		cout<<"\n\n\nRecord adding limit achieved!...";
	}
	
	cout<<"\n\n\nPress Enter to go back to menu --->";
	getch(); //reads single-character from keyboard but doesn't display.
}

void display(ct teams[],int size,int& count)
{
	system("cls");
	int i;
	cout<<"\n\t------------*DISPLAY FUNCTION*-----------\n";
	cout<<"\t==============================================\n";
	if(count==0)
	{
		cout<<"\n\t-----> No Records added yet....\n";
	}
	else
	{
		cout<<"\nTeam"<<setw(20)<<"Ranking"<<setw(20)<<"Matches Played"<<setw(20)<<"ICC Events(Won)\n";
		cout<<"--------------------------------------------------------------------\n";
		for(i=0;i<count;i++)
		{
			cout<<left<<setw(20)<<teams[i].name<<setw(15)<<teams[i].ranking<<setw(15)<<teams[i].matches<<setw(15)<<teams[i].ev_won<<"\n";
		}

	}
	cout<<"\n\n\nPress Enter to go back to menu --->";
	getch();
}

void search(ct teams[],int size,int& count)
{
	system("cls");
	int i;
	char name2[50];
	cout<<"\n\t----------*Searching Records*------------\n";
	cout<<"\t================================================\n";
	cout<<"\nSearch record by 'Team Name' : ";
	cin.getline(name2,50);
	bool found=false;
	for(i=0;i<count;i++)
	{
		if(strcmp(teams[i].name,name2)==0)
		{
			found=true;
			if(found==true)
			{
				cout<<"\n\n-----> Record Found <-----\n\n";
			    cout<<"\nTeam"<<setw(20)<<"Ranking"<<setw(20)<<"Matches Played"<<setw(20)<<"ICC Events(Won)\n";
			    cout<<"-----------------------------------------------------------------------\n";
			    cout<<left<<setw(20)<<teams[i].name<<setw(15)<<teams[i].ranking<<setw(15)<<teams[i].matches<<setw(15)<<teams[i].ev_won<<"\n";
			}
		}
	}
	if(!found)
	{
		cout<<"\n\n*** No Record Found!***\n";
	}
	
	cout<<"\n\nPress Enter to go back to menu --->";
	getch();
}

void sort(ct teams[],int size,int& count)
{
	system("cls");
	int i,j;
	char choice;
	cout<<"\n\t--------*SORTING DATA*---------\n";
	cout<<"\t================================================\n";
	cout<<"\n\nDo you want to sort by 'ICC wins' or 'ranking' [w,r]: ";
	choice=getch();
	if(count==0)
	{
		cout<<"\n\n\nNo records to sort!....";
	}
	else if(choice=='w')
	{
		for (i=0;i<count-1;i++)
	    {
            for (j=0;j<count-i-1;j++)
		    {
                if (teams[j].ev_won<teams[j+1].ev_won)
			    {
                    swap(teams[j],teams[j+1]);
                }
            }
        }
        cout << "\n\n\t-------> Records sorted by ICC Wins <--------\n";
        cout<<"\t-----------------------------------------------------\n\n";
        cout<<"\nTeam"<<setw(20)<<"Ranking"<<setw(20)<<"Matches Played"<<setw(20)<<"ICC Events(Won)\n";
        cout<<"-------------------------------------------------------------------------------\n";
        for(i=0;i<count;i++)
        {
	        cout<<left<<setw(20)<<teams[i].name<<setw(15)<<teams[i].ranking<<setw(15)<<teams[i].matches<<setw(15)<<teams[i].ev_won<<"\n";	
	    }
	}
	else if(choice=='r')
	{
		for(i=0;i<count-1;i++)
		{
			for(j=0;j<count-i-1;j++)
			{
				if(strcmp(teams[j].ranking,teams[j+1].ranking)>0)
				{
					swap(teams[j],teams[j+1]);
				}
			}
		}
		cout << "\n\n\t-------> Records sorted by Team Rankings <--------\n";
        cout<<"\t-----------------------------------------------------\n\n";
        cout<<"\nTeam"<<setw(20)<<"Ranking"<<setw(20)<<"Matches Played"<<setw(20)<<"ICC Events(Won)\n";
        cout<<"-------------------------------------------------------------------------------\n";
        for(i=0;i<count;i++)
        {
        	cout<<left<<setw(20)<<teams[i].name<<setw(15)<<teams[i].ranking<<setw(15)<<teams[i].matches<<setw(15)<<teams[i].ev_won<<"\n";
		}
	}
    
			
	cout<<"\n\n\nPress Enter to go back to menu --->";
	getch();
}

void del(ct teams[],int size,int& count)
{
	system("cls");
	int i,j;
	char name3[50];
	cout<<"\n\n\t--------*DELETING RECORD*---------\n";
	cout<<"\t==========================================\n";
	cout<<"\n\nEnter Team name: "; //Entering Team name whose record has to be Deleted.
	cin.getline(name3,50);
	if(count==0)
	{
		cout<<"\n\n------*No record found!*------";
	}
	else
	{
		for(i=0;i<count;i++)
	    {
	    	if(strcmp(teams[i].name,name3)==0)
	    	{
	    		for (j=i;j<count-1;j++)
			    {
				    teams[j] = teams[j + 1];
				    count--;
                }
			}
        }
        cout << "\n\n**** Record deleted successfully.... ****\n";
	}
    
    cout<<"\n\n\nPress Enter to go back to menu --->";
	getch();
}

void modify(ct teams[],int size,int& count)
{
	system("cls");
	int i;
	char name4[50];
	bool found=false;
	cout<<"\n\n\t--------*MODIFYING RECORD*---------\n";
	cout<<"\t==========================================\n";
	cout<<"\nEnter Team name: "; //team whose record has to be modified.
	cin.getline(name4,50);
	for(i=0;i<count;i++)
	{
		if(strcmp(teams[i].name,name4)==0){
			found=true;
		cout<<"\n-------> Enter new details for the team:\n";
        cout<<"\nEnter team ranking: ";
        cin.getline(teams[i].ranking,10);
        cin.ignore();
        cout<<"\nEnter matches played: ";
        cin>>teams[i].matches;
        cin.ignore();
        cout<<"\nEnter no. of ICC events won: ";
        cin>>teams[i].ev_won;
        cin.ignore();
        cout<<"\n\n.....*Record modified successfully*....\n";
        }
	}
	if(!found)
	{
		cout<<"\nRecord not found!\n";
	}
	cout<<"\nTeam"<<setw(20)<<"Ranking"<<setw(20)<<"Matches Played"<<setw(20)<<"ICC Events(Won)\n";
	cout<<"-------------------------------------------------------------------------------\n";
	for(i=0;i<count;i++)   
	{
	    cout<<left<<setw(20)<<teams[i].name<<setw(15)<<teams[i].ranking<<setw(15)<<teams[i].matches<<setw(15)<<teams[i].ev_won<<"\n";	
	}
	
	cout<<"\n\n\nPress Enter to go back to menu --->";
	getch();
}




//////////// gotoxy function /////////////////
void gotoxy(short x, short y) 
{
COORD pos = {x, y};  //x=columns & y=rows.
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}