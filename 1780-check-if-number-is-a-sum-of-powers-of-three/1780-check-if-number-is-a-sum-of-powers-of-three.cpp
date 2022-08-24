class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0)
    {
        int rev=n%3;
        if(rev>1)
            return false;
        n=n/3;
    }
    return true;
}
    
};