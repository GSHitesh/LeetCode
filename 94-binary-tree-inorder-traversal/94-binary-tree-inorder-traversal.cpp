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
    
    void InOrder(TreeNode *root, vector<int> &result){
        if(root){
            
            // if(root->left)
                InOrder(root->left,result);
            result.push_back(root->val);
            // if(root->right)
                InOrder(root->right,result);
            
        }
        
        return;
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> result;
        InOrder(root, result);
        
        return result;
    }
};