/* Binary Searching program*/
#include<iostream>
#include<cmath>

using namespace std;

void Binarysearch(int arr[],const int size1,int num1,int& count,bool& found)
{
	int start=0,end=size1-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(num1>arr[mid])
		{
			start=mid+1;
		}
		else if(num1<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			found=true;
			count=mid;
		    cout<<"\nNumber is found at index "<<count<<endl;
		    break;
		}
	}
	if(!found)
	{
		cout<<"\nNumber not found!\n";
	}
}

int main()
{
	const int size=4;
	int list[size];
	int i,count1,num;
	bool found1;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter value at index "<<i<<": ";
		cin>>list[i];
	}
	cout<<"\nArray = [ ";
	for(i=0;i<size;i++)
	{
		cout<<list[i]<<" ";
	}
	cout<<"]\n";
	cout<<"\nEnter number you want to search: ";
	cin>>num;
	Binarysearch(list,size,num,count1,found1);
	
	
}