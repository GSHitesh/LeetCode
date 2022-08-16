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
    
    void PreOrder(TreeNode *root, vector<int> &result){
        if(root){
            result.push_back(root->val);
            // if(root->left)
                PreOrder(root->left,result);
            // if(root->right)
                PreOrder(root->right,result);
            
        }
        
        return;
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> result;
        PreOrder(root, result);
        
        return result;
    }
};