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
    TreeNode* bst(vector<int>& v,int &i,int max_range){
        if(i==v.size()|| v[i]>max_range){
            return NULL;
        }
        TreeNode* root=new TreeNode(v[i]);
        i++;
        root->left=bst(v,i,root->val);
        root->right=bst(v,i,max_range);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int ind=0;
        return bst(preorder,ind,INT_MAX);
    }
};