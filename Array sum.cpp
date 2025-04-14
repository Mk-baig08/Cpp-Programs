// Find sum of Array elemnts recursively

#include <iostream>

using namespace std;

int arraySum(int arr[], int n)
{
    if (n == 0)
	{
		return 0;
	}
    return arr[n - 1] + arraySum(arr, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum: " << arraySum(arr, size);
    
    return 0;
}
