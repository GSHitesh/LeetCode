// Print all the duplicates in the input string

#include <bits/stdc++.h>

using namespace std;


int main()
{
    string s;
    getline(cin,s);
    
    map <char,int> count;
    
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    
    for(auto it: count){
        if(it.second > 1)
            cout << it.first << " ";
    }
    
    return 0;
}
