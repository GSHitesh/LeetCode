class Solution {

    
    struct compare{
        bool operator()(int x , int y){
            string a = to_string(x);
            string b = to_string(y);
            return (a+b > b+a);
        }
    }myobj;
    public:
    string largestNumber(vector<int>& nums) {
        vector <string> number;
        for(int i: nums){
        number.push_back(to_string(i));
        }
        
        sort(nums.begin(),nums.end(), myobj);
        if(nums[0] == 0)
            return "0";
        
        string largest = "";
        for(auto i : nums){
            largest +=to_string(i);
        }
        
        return largest;
        
    
    }
};