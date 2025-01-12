/*(Program) Write a program which declares two variables of a structure and
copies the contents of first variable into the second variable. */
    
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cctype>
#include<string>
#include<cstring>
#include<cmath>

using namespace std;

struct pct
{
	char team1_name[20];
	char team2_name[20];
	int matches;
	float win;
};

int main()
{
	pct team1,team2;
	cout<<"\nEnter Team1 name: ";
	gets(team1.team1_name);
	cout<<"\nEnter opponent name: ";
	gets(team1.team2_name);
	cout<<"\nEnter No. of matches played: ";
	cin>>team1.matches;
	cin.ignore();
	cout<<"\nEnter win percentage: ";
	cin>>team1.win;
	cin.ignore();
	cout<<"\n---------------------------\n";
	team2=team1;
	cout<<"\nTeam 2: "<<team2.team1_name<<endl;
	cout<<"\nOpponent: "<<team2.team2_name<<endl;
	cout<<"\nMatches played: "<<team2.matches<<endl;
	cout<<"\nWin percentage: "<<team2.win<<endl;
	
	return 0;
}
