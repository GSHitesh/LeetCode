//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        int A[] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        sort(A,A+10);
        
        vector <int> v;
        int denomination;
        
        for(int i = 9;i>=0;i--){
            while(N>=A[i]){
                N -= A[i];
                v.push_back(A[i]);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends