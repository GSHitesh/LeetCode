// C++ program to find number of operations
// to make an array palindrome

#include <bits/stdc++.h>
using namespace std;


int findMinOps(int A[], int n)
{
	int operation = 0;
    int low = 0;
    int high = n - 1;
    while(low <= high){
        if(A[low] == A[high]){
            low++; high--;
        }
        else if(A[low] > A[high]){
            high--;
            A[high] += A[high+1];            
            operation++;
        }
        else{
            low++;
            A[low] += A[low-1];
            operation++;
        }
    }

    return operation;
}

// Driver program to test above
int main()
{
	int arr[] = {1, 4, 5, 9, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Count of minimum operations is "
		<< findMinOps(arr, n) << endl;
	return 0;
}
