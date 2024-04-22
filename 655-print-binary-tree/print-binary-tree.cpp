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
    int Height(TreeNode* root) {
        if (!root) {
            return 0;
        }
        return 1 + max(Height(root->left), Height(root->right));
    }
    void populateAns(TreeNode* root, int r, int c,vector<vector<string>>& mat, int& height) {
        if (!root) {
            return;
        }
        mat[r][c] = to_string(root->val);
        if(!root->left && !root->right){
            return;
        }
        int left = c - pow(2,height-r-1);
        int right = c + pow(2,height-r-1);
        populateAns(root->left, r+1, left, mat, height);
        populateAns(root->right, r+1, right, mat, height);
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int height = Height(root) - 1;
        int c = pow(2,height+1)-1;
        vector<vector<string>> mat(height + 1, vector<string>(c, ""));
        populateAns(root, 0, (c-1)/2, mat, height);
        return mat;
    }
};