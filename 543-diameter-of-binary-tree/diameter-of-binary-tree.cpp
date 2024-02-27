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
    int count=0;
    int diameter(TreeNode* root,int &count){
        if(!root){
            return 0;
        }
        int left=diameter(root->left,count);
        int right=diameter(root->right,count);
        count=max(count,left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // if(root==NULL){
        //     return count;
        // }
        // if(root->left || root->right){
        //     count++;
        //     return count;
        // }
        diameter(root,count);
        return count;


    }
};