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
    void dfs(TreeNode* node,int depth){
        if(node==NULL){
            return;
        }
        if(depth==v.size()){
            v.push_back(node->val);
        }
        else{
            v[depth]=max(v[depth],node->val);
        }
        dfs(node->left,depth+1);
        dfs(node->right,depth+1);
    }
    vector<int> largestValues(TreeNode* root) {
        dfs(root,0);
        return v;
    }
    
};