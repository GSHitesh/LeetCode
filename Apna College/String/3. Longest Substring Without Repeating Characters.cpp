// 3. Longest Substring Without Repeating Characters


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, result = 0;
        map <char,int> count;
        for(int right=0;right<s.length();right++){
            count[s[right]]++;
            while(count[s[right]] > 1){                
                count[s[right]]--;
                left++;
            }
            
            result = max(result,right - left + 1);
            
                
        }
        
        return result;
    }
};