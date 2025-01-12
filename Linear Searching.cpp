#include<iostream>
#include<iomanip>

using namespace std;

void search(int [],int,int,int&,bool&);
void search(int list[],const int size,int num,int& index,bool& found)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(num==list[i])
		{
			found=true;
			if(found==true)
			{
				index=i;
				cout<<"\nNumber is found at index "<<index;
			}
		}
	}
	if(found!=true)
	{
		cout<<"\nNumber not found!\n";
	}
}

int main()
{
	const int size1 = 4;
	int ind,num1,i,arr[size1];
	bool found1;
	for(i=0;i<size1;i++)
	{
		cout<<"\nEnter value for index "<<i<<": ";
		cin>>arr[i];
	}
	cout<<"\nEnter number you want to search: ";
	cin>>num1;
	search(arr,size1,num1,ind,found1);
	
}