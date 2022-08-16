/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void PostOrder(TreeNode *root, vector<int> &result){
        if(root){
            
            // if(root->left)
                PostOrder(root->left,result);
            // if(root->right)
                PostOrder(root->right,result);
                result.push_back(root->val);

            
        }
        
        return;
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> result;
        PostOrder(root, result);
        
        return result;
    }
};