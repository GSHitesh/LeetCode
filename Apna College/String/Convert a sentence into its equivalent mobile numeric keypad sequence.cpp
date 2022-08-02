
#include <bits/stdc++.h>

using namespace std;

string Convert_TO_Equivalent(string A[], string s){
    int n = s.length();
    
    string result = "";
    
    for(int i=0;i<n;i++){
        if(s[i] == ' ')
            result += "0";
        
        else{
            int index = s[i] - 'A';
            result += A[index];
        }
            
    }
    
    return result;
}

int main()
{
    string s;
    getline(cin,s);
    
    string A [] = {"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666",
                "7","77","777","7777","8","88","888","9","99","999","9999"};
    
    cout << Convert_TO_Equivalent(A,s);
    return 0;
}
