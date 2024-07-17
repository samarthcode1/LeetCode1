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
    void checkdfs(TreeNode* root, unordered_set<int>& st, vector<TreeNode* >& v,bool isroot) {
        if (!root) {
            return ;
        }
        if(st.count(root->val)){
            checkdfs(root->left,st,v,true);
            checkdfs(root->right,st,v,true);
            return;
        }
        if(isroot){
            v.push_back(root);
        }
        TreeNode* left=root->left;
        TreeNode* right=root->right;
        if(left && st.count(left->val)){
            root->left=NULL;
        }
        if(right && st.count(right->val)){
            root->right=NULL;
        }
        checkdfs(left,st,v,false);
        checkdfs(right,st,v,false);
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> st;
        for (auto i : to_delete) {
            st.insert(i);
        }
        vector<TreeNode*> v;
        checkdfs(root, st, v, true);
        return v;
    }
};