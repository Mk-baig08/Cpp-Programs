#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	// 1 meter = 3.281 feet.
	int count,n_c;
	count = 1;
	float meters,i,feet;
	cout<<"Enter starting metric value: ";
	cin>>meters;
	cout<<"\nEnter number of conversions you want to make: ";
	cin>>n_c;
	cout<<"\nEnter increment between metric values: ";
	cin>>i;
	cout<<"\nMetric value:"<<"  "<<"Feet value:\n";
	cout<<"-----------------------------";
	while(count<=n_c)
	{
		if(n_c>10)
		{
			i = 10;
			feet = meters/3.281;
		    cout<<"\n"<<meters<<"\t\t"<<feet<<"\n";
		    meters+=i;
		    count+=1;
		}
		else
		{
		feet = meters/3.281;
		cout<<"\n"<<meters<<"\t\t"<<feet<<"\n";
		meters+=i;
		count+=1;
	    }
	}
	
	return 0;
}