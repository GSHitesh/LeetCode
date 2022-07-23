// C++ program to find a pair with a given sum in a sorted and
// rotated array
#include<iostream>
using namespace std;

bool pairInSortedRotated(int arr[], int n, int x)
{
	int i;  // pivot element
    for(i=0;i<n-1;i++){
        if(arr[i] > arr[i+1])
            break;
    }
    int low = (i+1)%n;
    int high = i;

    while(low != high){
        if(arr[low] + arr[high] == x)   // low may starts in between of arr but starting index has the lowest value
            return true;
        if((arr[low] + arr[high]) < x ){
            low = (i+1)%n;
        }
        else{
            high = (high + i -1)%n; // to iterate in the rotated array 
        }
    }
    return false;
}

/* Driver program to test above function */
int main()
{
	int arr[] = {11, 15, 6, 8, 9, 10};
	int sum = 16;
	int n = sizeof(arr)/sizeof(arr[0]);

	if (pairInSortedRotated(arr, n, sum))
		cout << "Array has two elements with sum 16";
	else
		cout << "Array doesn't have two elements with sum 16 ";

	return 0;
}
