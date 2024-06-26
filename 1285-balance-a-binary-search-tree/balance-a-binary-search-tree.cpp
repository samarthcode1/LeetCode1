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
    vector<int>in;
    void inorder(TreeNode* root){
        if(!root){
            return;
        }
        inorder(root->left);
        in.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* constr(int start,int end){
        if(start>end || start>=in.size()){
            return NULL;
        }
        TreeNode* node=new TreeNode();
        if(start==end){
            node->val=in[start];
            return node;
        }
        int mid=(start+end)/2;
        node->val=in[mid];
        node->left=constr(start,mid-1);
        node->right=constr(mid+1,end);
        return node;

    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        int n=in.size();
        TreeNode* node=new TreeNode();
        if(n==1){
            node->val=in[0];
            return node;
        }
        node->val=in[n/2];
        node->left=constr(0,(n/2)-1);
        node->right=constr((n/2)+1,n);
        return node;

    }
};