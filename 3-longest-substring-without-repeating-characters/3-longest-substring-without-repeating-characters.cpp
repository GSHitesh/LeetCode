class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, result = 0;
        map <char,int> count;
        for(int i=0;i<s.length();i++){
            count[s[i]]++;
            while(count[s[i]] > 1){                
                count[s[left]]--;
                left++;
            }
            
            result = max(result,i - left + 1);
            
                
        }
        
        return result;
    }
};