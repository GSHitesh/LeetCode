class Solution {
public:
    bool search(vector<int>& A, int key) {
        
        int l=0;
        int h= A.size()-1;
        int mid;
        
        while(l<=h){
            mid = l + (h-l)/2;
            if(key == A[mid])
                return true;
            
            if((A[l] == A[mid]) && (A[mid] == A[h])){
                l++;
                h--;
            }
            
                        
            else if(A[l] <= A[mid]){    // A[l] not key
                if(key >= A[l] && key <A[mid])
                    h = mid - 1;
                else
                    l = mid + 1;
                
            }
            
            else{
                if(key > A[mid] && key <= A[h])
                    l = mid +1;
                else
                    h = mid -1;
            }
                    
        }
        
        return false;
         
        
    }
};