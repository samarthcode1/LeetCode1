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
    int index=0;
    TreeNode* first;
    TreeNode* middle;
    TreeNode* last;
    TreeNode* prev;
    void findInorder(TreeNode* root){
        if(!root){
            return;
        }
        findInorder(root->left);
        if(prev && (root->val<prev->val)){
            if(!first){
                first=prev;
                middle=root;
            }
            else{
                last=root;
            }
        }
        prev=root;
        findInorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        first=middle=last=NULL;
        prev=new TreeNode(INT_MIN);
        findInorder(root);
        if(first && last){
            swap(first->val,last->val);
        }
        else if(first && middle){
            swap(first->val,middle->val);
        }
    }
};