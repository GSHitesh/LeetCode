class Solution {
public:     

    int countSubstrings(string s) {       
        
         bool dp [s.length()][s.length()];
        int start=0, end=1, len=0;
        int count = 0;
        for(int g=0; g<s.length();g++){
            
            // Start point of every diagonal is 0,gap
            // Ends at last column
            for(int i=0, j=g; j<s.length(); i++,j++){
                // g=0 means there is only 1 character
                // 1 char is always palindrome
                if(g == 0){
                    dp[i][j] = true;
                    count++;
                }
                // If there are 2 elements both should be equal
                else if(g == 1){
                    if(s[i] == s[j]){
                        dp[i][j] = true;
                        count++;   
                    }
                    else
                        dp[i][j] = false;
                }
                else {
                    // Extremeties should be same and inner part should be palindrome
                    if(s[i] == s[j] && dp[i+1][j-1] == true){
                        dp[i][j] = true;
                        count++;
                    }
                    else
                        dp[i][j] = false;
                    
                }
                if(dp[i][j]){
                    // No need to take len max because g value is always increasing only
                    len = g+1;
                    start = i;
                    end = j;
                    
                }
                    
                
            }
        }
        
        
        return count;
    }
};