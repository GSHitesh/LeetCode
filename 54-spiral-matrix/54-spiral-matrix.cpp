class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();   // elements in a row
        int left = 0,right = m-1;   // column wise
        int top = 0, down = n-1;    // row wise
        int direction = 1;          // default left to right
        
        vector <int> spiral;
        
        while(left <= right && top <= down){
            if( direction == 1){    // left to right
                for(int i=left;i<=right;i++){
                    spiral.push_back(matrix[top][i]); // top will be fixed then top -> next
                    
                }
                    top++;
                    direction = 2;
            }
            
            else if(direction == 2){     // top to down
                for(int i=top;i<=down;i++){
                    spiral.push_back(matrix[i][right]); // right will be fixed
                    
                }
                
                right--;
                direction = 3;
                
            }
            else if(direction == 3){     // right to left
                for(int i=right;i>=left;i--){
                    spiral.push_back(matrix[down][i]);  // down is fixed
                    
                }
                
                down--;
                direction = 4;
                
            }
            else if(direction == 4){     // down to top
                for(int i=down;i>=top;i--){
                    spiral.push_back(matrix[i][left]);  // left is fixed
                    
                }
                
                left++;
                direction = 1;
                
            }
        }
        
        
        return spiral;
    }
};