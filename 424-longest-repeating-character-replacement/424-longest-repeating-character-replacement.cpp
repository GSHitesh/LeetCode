class Solution {
public:
    int characterReplacement(string s, int k) {
        int n= s.length();
        map <char,int> countChar;
        int maxCount =0;
        int maxLength = 0;
        int left =0;
        for(int right=0;right<n;right++){
            countChar[s[right]]++;
            int count = countChar[s[right]];
            maxCount = max(maxCount, count);
            if(right - left + 1 - maxCount > k){
                countChar[s[left]]--;
                left++;
                
            }
            maxLength = max(maxLength, right-left+1);
        }
        
        return maxLength;
    }
};