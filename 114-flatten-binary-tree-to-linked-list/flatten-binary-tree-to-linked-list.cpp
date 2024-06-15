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
    void Preorder(TreeNode* root, vector<int>& v) {
        if (!root) {
            return;
        }
        v.push_back(root->val);
        Preorder(root->left, v);
        Preorder(root->right, v);
    }
    // void cal(TreeNode* root,vector<int>& v,int& n,int& i){
    //     if(n<=0){
    //         return;
    //     }
    //     root->left=NULL;
    //     root->right=v[i];
    //     n--;
    //     cal(root->right,v,n,i+1);

    // }
    void flatten(TreeNode* root) {
        // vector<int>v;
        // Preorder(root,v);
        // int n=v.size();
        // cal(root,v,n,0);
        TreeNode* curr = root;
        while (curr) {
            if (curr->left) {
                TreeNode* prev = curr->left;
                while (prev->right) {
                    prev = prev->right;
                }
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};