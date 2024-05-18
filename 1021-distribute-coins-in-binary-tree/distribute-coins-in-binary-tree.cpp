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
    int check(TreeNode* root,int& count){
        if(!root){
            return 0;
        }
        int c1=check(root->left,count);
        int c2=check(root->right,count);
        count+=abs(c1)+abs(c2);
        return c1+c2+(root->val-1);
    }
    int distributeCoins(TreeNode* root) {
        int count=0;
        check(root,count);
        return count;
    }
};