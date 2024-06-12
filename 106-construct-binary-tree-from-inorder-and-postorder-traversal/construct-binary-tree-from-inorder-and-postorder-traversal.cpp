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
    TreeNode* constr(vector<int>& postorder, int ps,int pe,vector<int>& inorder,int is,int ie,map<int,int>& mp){
        if(ps>pe || is>ie){
            return NULL;
        }
        TreeNode* root=new TreeNode(postorder[pe]);
        int pos=mp[root->val];
        int right=ie-pos;
        root->right=constr(postorder,pe-right,pe-1,inorder,pos+1,ie,mp);
        root->left=constr(postorder,ps,pe-right-1,inorder,is,pos-1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int ps=0,pe=postorder.size()-1,is=0,ie=inorder.size()-1;
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode* root=constr(postorder,ps,pe,inorder,is,ie,mp);
        return root;
    }
};