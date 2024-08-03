/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int temp = 0;
    void check(TreeNode* root, int n) {
        if (!root) {
            return;
        }
        // if (root->left  && root->left->val > root->val) {

        // }
        if(root->val>=n){
            temp++;
        }
        n=max(root->val,n);
        check(root->left,n);
        check(root->right,n);
    }
    int goodNodes(TreeNode* root) {
        check(root, INT_MIN);
        return temp;
    }
};