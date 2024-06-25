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
    vector<int>v;
    void inorder(TreeNode* root,int key){
        if(!root){
            return;
        }
        inorder(root->left,key);
        if(root->val!=key){
            v.push_back(root->val);
        }
        inorder(root->right,key);
    }
    TreeNode* makeTree(int start,int end){
        if(start>=v.size() || start>end){
            return nullptr;
        }
        TreeNode* temp=new TreeNode();
        if(start==end){
            temp->val=v[start];
            return temp;
        }
        int mid=(start+end)/2;
        temp->val=v[mid];
        temp->left=makeTree(start,mid-1);
        temp->right=makeTree(mid+1,end);
        return temp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        inorder(root,key);
        int n=v.size();
        if(!n){
            return nullptr;
        }
        TreeNode* temp=new TreeNode();
        if(n==1){
            temp->val=v[0];
            return temp;
        }
        temp->val=v[n/2];
        temp->left=makeTree(0,(n/2)-1);
        temp->right=makeTree((n/2)+1,n);
        return temp;
    }
};