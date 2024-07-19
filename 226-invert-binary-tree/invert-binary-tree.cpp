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
    bool isSys(TreeNode* root1,TreeNode* root2)
    {
        if(!root1 && !root2){
            return root1=root2;
        }
        return (root1->val=root2->val) && isSys(root1->left,root2->right) && isSys(root1->right,root2->left);

    }
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr)
        {
            return root;
        }
        swap(root -> left, root -> right);
        root -> left = invertTree(root -> left);
        root -> right = invertTree(root -> right);
        return root;
    }
};