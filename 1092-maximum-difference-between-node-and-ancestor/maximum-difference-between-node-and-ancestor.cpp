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
    int maxAncestorDiff(TreeNode* root) {
        return dfs(root,root->val,root->val);
    }
    int dfs(TreeNode* root,int maxi,int mini){
        if(root==NULL){
            return maxi-mini;
        }
        int max_val=max(root->val,maxi);
        int mini_val=min(root->val,mini);

        int leftmax=dfs(root->left,max_val,mini_val);
        int rightmax=dfs(root->right,max_val,mini_val);
        return max(leftmax,rightmax);
    }
};